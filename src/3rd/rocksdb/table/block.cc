
#include "table/block.h"

#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

#include "rocksdb/comparator.h"
#include "table/format.h"
#include "table/block_hash_index.h"
#include "table/block_prefix_index.h"
#include "util/coding.h"
#include "util/logging.h"

namespace rocksdb {

// Helper routine: decode the next block entry starting at "p",
// storing the number of shared key bytes, non_shared key bytes,
// and the length of the value in "*shared", "*non_shared", and
// "*value_length", respectively.  Will not derefence past "limit".
//
// If any errors are detected, returns nullptr.  Otherwise, returns a
// pointer to the key delta (just past the three decoded values).
static inline const char* DecodeEntry(const char* p, const char* limit,
                                      uint32_t* shared,
                                      uint32_t* non_shared,
                                      uint32_t* value_length) {
  if (limit - p < 3) return nullptr;
  *shared = reinterpret_cast<const unsigned char*>(p)[0];
  *non_shared = reinterpret_cast<const unsigned char*>(p)[1];
  *value_length = reinterpret_cast<const unsigned char*>(p)[2];
  if ((*shared | *non_shared | *value_length) < 128) {
    // Fast path: all three values are encoded in one byte each
    p += 3;
  } else {
    if ((p = GetVarint32Ptr(p, limit, shared)) == nullptr) return nullptr;
    if ((p = GetVarint32Ptr(p, limit, non_shared)) == nullptr) return nullptr;
    if ((p = GetVarint32Ptr(p, limit, value_length)) == nullptr) return nullptr;
  }

  if (static_cast<uint32_t>(limit - p) < (*non_shared + *value_length)) {
    return nullptr;
  }
  return p;
}

void BlockIter::Next() {
  assert(Valid());
  ParseNextKey();
}

void BlockIter::Prev() {
  assert(Valid());

  // Scan backwards to a restart point before current_
  const uint32_t original = current_;
  while (GetRestartPoint(restart_index_) >= original) {
    if (restart_index_ == 0) {
      // No more entries
      current_ = restarts_;
      restart_index_ = num_restarts_;
      return;
    }
    restart_index_--;
  }

  SeekToRestartPoint(restart_index_);
  do {
    // Loop until end of current entry hits the start of original entry
  } while (ParseNextKey() && NextEntryOffset() < original);
}

void BlockIter::Seek(const Slice& target) {
  if (data_ == nullptr) {  // Not init yet
    return;
  }
  uint32_t index = 0;
  bool ok = false;
  if (prefix_index_) {
    ok = PrefixSeek(target, &index);
  } else {
    ok = hash_index_ ? HashSeek(target, &index)
      : BinarySeek(target, 0, num_restarts_ - 1, &index);
  }

  if (!ok) {
    return;
  }
  SeekToRestartPoint(index);
  // Linear search (within restart block) for first key >= target

  while (true) {
    if (!ParseNextKey() || Compare(key_.GetKey(), target) >= 0) {
      return;
    }
  }
}

void BlockIter::SeekToFirst() {
  if (data_ == nullptr) {  // Not init yet
    return;
  }
  SeekToRestartPoint(0);
  ParseNextKey();
}

void BlockIter::SeekToLast() {
  if (data_ == nullptr) {  // Not init yet
    return;
  }
  SeekToRestartPoint(num_restarts_ - 1);
  while (ParseNextKey() && NextEntryOffset() < restarts_) {
    // Keep skipping
  }
}

void BlockIter::CorruptionError() {
  current_ = restarts_;
  restart_index_ = num_restarts_;
  status_ = Status::Corruption("bad entry in block");
  key_.Clear();
  value_.clear();
}

bool BlockIter::ParseNextKey() {
    current_ = NextEntryOffset();
    const char* p = data_ + current_;
    const char* limit = data_ + restarts_;  // Restarts come right after data
    if (p >= limit) {
      // No more entries to return.  Mark as invalid.
      current_ = restarts_;
      restart_index_ = num_restarts_;
      return false;
    }

    // Decode next entry
    uint32_t shared, non_shared, value_length;
    p = DecodeEntry(p, limit, &shared, &non_shared, &value_length);
    if (p == nullptr || key_.Size() < shared) {
      CorruptionError();
      return false;
    } else {
      key_.TrimAppend(shared, p, non_shared);
      value_ = Slice(p + non_shared, value_length);
      while (restart_index_ + 1 < num_restarts_ &&
             GetRestartPoint(restart_index_ + 1) < current_) {
        ++restart_index_;
      }
      return true;
    }
  }

// Binary search in restart array to find the first restart point
// with a key >= target (TODO: this comment is inaccurate)
bool BlockIter::BinarySeek(const Slice& target, uint32_t left, uint32_t right,
                  uint32_t* index) {
  assert(left <= right);

  while (left < right) {
    uint32_t mid = (left + right + 1) / 2;
    uint32_t region_offset = GetRestartPoint(mid);
    uint32_t shared, non_shared, value_length;
    const char* key_ptr =
        DecodeEntry(data_ + region_offset, data_ + restarts_, &shared,
                    &non_shared, &value_length);
    if (key_ptr == nullptr || (shared != 0)) {
      CorruptionError();
      return false;
    }
    Slice mid_key(key_ptr, non_shared);
    int cmp = Compare(mid_key, target);
    if (cmp < 0) {
      // Key at "mid" is smaller than "target". Therefore all
      // blocks before "mid" are uninteresting.
      left = mid;
    } else if (cmp > 0) {
      // Key at "mid" is >= "target". Therefore all blocks at or
      // after "mid" are uninteresting.
      right = mid - 1;
    } else {
      left = right = mid;
    }
  }

  *index = left;
  return true;
}

// Compare target key and the block key of the block of `block_index`.
// Return -1 if error.
int BlockIter::CompareBlockKey(uint32_t block_index, const Slice& target) {
  uint32_t region_offset = GetRestartPoint(block_index);
  uint32_t shared, non_shared, value_length;
  const char* key_ptr = DecodeEntry(data_ + region_offset, data_ + restarts_,
                                    &shared, &non_shared, &value_length);
  if (key_ptr == nullptr || (shared != 0)) {
    CorruptionError();
    return 1;  // Return target is smaller
  }
  Slice block_key(key_ptr, non_shared);
  return Compare(block_key, target);
}

// Binary search in block_ids to find the first block
// with a key >= target
bool BlockIter::BinaryBlockIndexSeek(const Slice& target, uint32_t* block_ids,
                          uint32_t left, uint32_t right,
                          uint32_t* index) {
  assert(left <= right);
  uint32_t left_bound = left;

  while (left <= right) {
    uint32_t mid = (left + right) / 2;

    int cmp = CompareBlockKey(block_ids[mid], target);
    if (!status_.ok()) {
      return false;
    }
    if (cmp < 0) {
      // Key at "target" is larger than "mid". Therefore all
      // blocks before or at "mid" are uninteresting.
      left = mid + 1;
    } else {
      // Key at "target" is <= "mid". Therefore all blocks
      // after "mid" are uninteresting.
      // If there is only one block left, we found it.
      if (left == right) break;
      right = mid;
    }
  }

  if (left == right) {
    // In one of the two following cases:
    // (1) left is the first one of block_ids
    // (2) there is a gap of blocks between block of `left` and `left-1`.
    // we can further distinguish the case of key in the block or key not
    // existing, by comparing the target key and the key of the previous
    // block to the left of the block found.
    if (block_ids[left] > 0 &&
        (left == left_bound || block_ids[left - 1] != block_ids[left] - 1) &&
        CompareBlockKey(block_ids[left] - 1, target) > 0) {
      current_ = restarts_;
      return false;
    }

    *index = block_ids[left];
    return true;
  } else {
    assert(left > right);
    // Mark iterator invalid
    current_ = restarts_;
    return false;
  }
}

bool BlockIter::HashSeek(const Slice& target, uint32_t* index) {
  assert(hash_index_);
  auto restart_index = hash_index_->GetRestartIndex(target);
  if (restart_index == nullptr) {
    current_ = restarts_;
    return false;
  }

  // the elements in restart_array[index : index + num_blocks]
  // are all with same prefix. We'll do binary search in that small range.
  auto left = restart_index->first_index;
  auto right = restart_index->first_index + restart_index->num_blocks - 1;
  return BinarySeek(target, left, right, index);
}

bool BlockIter::PrefixSeek(const Slice& target, uint32_t* index) {
  assert(prefix_index_);
  uint32_t* block_ids = nullptr;
  uint32_t num_blocks = prefix_index_->GetBlocks(target, &block_ids);

  if (num_blocks == 0) {
    current_ = restarts_;
    return false;
  } else  {
    return BinaryBlockIndexSeek(target, block_ids, 0, num_blocks - 1, index);
  }
}

uint32_t Block::NumRestarts() const {
  assert(size_ >= 2*sizeof(uint32_t));
  return DecodeFixed32(data_ + size_ - sizeof(uint32_t));
}

Block::Block(BlockContents&& contents)
    : contents_(std::move(contents)),
      data_(contents_.data.data()),
      size_(contents_.data.size()) {
  if (size_ < sizeof(uint32_t)) {
    size_ = 0;  // Error marker
  } else {
    restart_offset_ =
        static_cast<uint32_t>(size_) - (1 + NumRestarts()) * sizeof(uint32_t);
    if (restart_offset_ > size_ - sizeof(uint32_t)) {
      // The size is too small for NumRestarts() and therefore
      // restart_offset_ wrapped around.
      size_ = 0;
    }
  }
}

Iterator* Block::NewIterator(
    const Comparator* cmp, BlockIter* iter, bool total_order_seek) {
  if (size_ < 2*sizeof(uint32_t)) {
    if (iter != nullptr) {
      iter->SetStatus(Status::Corruption("bad block contents"));
      return iter;
    } else {
      return NewErrorIterator(Status::Corruption("bad block contents"));
    }
  }
  const uint32_t num_restarts = NumRestarts();
  if (num_restarts == 0) {
    if (iter != nullptr) {
      iter->SetStatus(Status::OK());
      return iter;
    } else {
      return NewEmptyIterator();
    }
  } else {
    BlockHashIndex* hash_index_ptr =
        total_order_seek ? nullptr : hash_index_.get();
    BlockPrefixIndex* prefix_index_ptr =
        total_order_seek ? nullptr : prefix_index_.get();

    if (iter != nullptr) {
      iter->Initialize(cmp, data_, restart_offset_, num_restarts,
                    hash_index_ptr, prefix_index_ptr);
    } else {
      iter = new BlockIter(cmp, data_, restart_offset_, num_restarts,
                           hash_index_ptr, prefix_index_ptr);
    }
  }

  return iter;
}

void Block::SetBlockHashIndex(BlockHashIndex* hash_index) {
  hash_index_.reset(hash_index);
}

void Block::SetBlockPrefixIndex(BlockPrefixIndex* prefix_index) {
  prefix_index_.reset(prefix_index);
}

size_t Block::ApproximateMemoryUsage() const {
  size_t usage = size();
  if (hash_index_) {
    usage += hash_index_->ApproximateMemoryUsage();
  }
  if (prefix_index_) {
    usage += prefix_index_->ApproximateMemoryUsage();
  }
  return usage;
}

}  // namespace rocksdb
