
#pragma once

namespace rocksdb {

class WriteBuffer {
 public:
  explicit WriteBuffer(size_t _buffer_size)
    : buffer_size_(_buffer_size), memory_used_(0) {}

  ~WriteBuffer() {}

  size_t memory_usage() const { return memory_used_; }
  size_t buffer_size() const { return buffer_size_; }

  // Should only be called from write thread
  bool ShouldFlush() const {
    return buffer_size() > 0 && memory_usage() >= buffer_size();
  }

  // Should only be called from write thread
  void ReserveMem(size_t mem) { memory_used_ += mem; }
  void FreeMem(size_t mem) { memory_used_ -= mem; }

 private:
  const size_t buffer_size_;
  size_t memory_used_;

  // No copying allowed
  WriteBuffer(const WriteBuffer&);
  void operator=(const WriteBuffer&);
};

}  // namespace rocksdb
