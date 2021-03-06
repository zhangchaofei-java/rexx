
#ifndef GOOGLE_PROTOBUF_ATOMIC_SEQUENCE_NUM_H_
#define GOOGLE_PROTOBUF_ATOMIC_SEQUENCE_NUM_H_

#include <google/protobuf/stubs/atomicops.h>

namespace google {
namespace protobuf {
namespace internal {

class SequenceNumber {
 public:
  SequenceNumber() : word_(0) {}

  AtomicWord GetNext() {
    return NoBarrier_AtomicIncrement(&word_, 1) - 1;
  }
 private:
  AtomicWord word_;
};

}  // namespace internal
}  // namespace protobuf
}  // namespace google

#endif  // GOOGLE_PROTOBUF_ATOMIC_SEQUENCE_NUM_H_
