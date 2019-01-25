
#ifndef GOOGLE_PROTOBUF_ATOMICOPS_INTERNALS_PNACL_H_
#define GOOGLE_PROTOBUF_ATOMICOPS_INTERNALS_PNACL_H_

#include <atomic>

namespace google {
namespace protobuf {
namespace internal {


//
// TODO(jfb) If this header manages to stay committed then the API should be
//           modified, and all call sites updated.
typedef volatile std::atomic<Atomic32>* AtomicLocation32;
static_assert(sizeof(*(AtomicLocation32) nullptr) == sizeof(Atomic32),
              "incompatible 32-bit atomic layout");

inline void MemoryBarrier() {
#if defined(__GLIBCXX__)
  // Work around libstdc++ bug 51038 where atomic_thread_fence was declared but
  // not defined, leading to the linker complaining about undefined references.
  __atomic_thread_fence(std::memory_order_seq_cst);
#else
  std::atomic_thread_fence(std::memory_order_seq_cst);
#endif
}

inline Atomic32 NoBarrier_CompareAndSwap(volatile Atomic32* ptr,
                                         Atomic32 old_value,
                                         Atomic32 new_value) {
  ((AtomicLocation32)ptr)
      ->compare_exchange_strong(old_value,
                                new_value,
                                std::memory_order_relaxed,
                                std::memory_order_relaxed);
  return old_value;
}

inline Atomic32 NoBarrier_AtomicExchange(volatile Atomic32* ptr,
                                         Atomic32 new_value) {
  return ((AtomicLocation32)ptr)
      ->exchange(new_value, std::memory_order_relaxed);
}

inline Atomic32 NoBarrier_AtomicIncrement(volatile Atomic32* ptr,
                                          Atomic32 increment) {
  return increment +
         ((AtomicLocation32)ptr)
             ->fetch_add(increment, std::memory_order_relaxed);
}

inline Atomic32 Barrier_AtomicIncrement(volatile Atomic32* ptr,
                                        Atomic32 increment) {
  return increment + ((AtomicLocation32)ptr)->fetch_add(increment);
}

inline Atomic32 Acquire_CompareAndSwap(volatile Atomic32* ptr,
                                       Atomic32 old_value,
                                       Atomic32 new_value) {
  ((AtomicLocation32)ptr)
      ->compare_exchange_strong(old_value,
                                new_value,
                                std::memory_order_acquire,
                                std::memory_order_acquire);
  return old_value;
}

inline Atomic32 Release_CompareAndSwap(volatile Atomic32* ptr,
                                       Atomic32 old_value,
                                       Atomic32 new_value) {
  ((AtomicLocation32)ptr)
      ->compare_exchange_strong(old_value,
                                new_value,
                                std::memory_order_release,
                                std::memory_order_relaxed);
  return old_value;
}

inline void NoBarrier_Store(volatile Atomic32* ptr, Atomic32 value) {
  ((AtomicLocation32)ptr)->store(value, std::memory_order_relaxed);
}

inline void Acquire_Store(volatile Atomic32* ptr, Atomic32 value) {
  ((AtomicLocation32)ptr)->store(value, std::memory_order_relaxed);
  MemoryBarrier();
}

inline void Release_Store(volatile Atomic32* ptr, Atomic32 value) {
  ((AtomicLocation32)ptr)->store(value, std::memory_order_release);
}

inline Atomic32 NoBarrier_Load(volatile const Atomic32* ptr) {
  return ((AtomicLocation32)ptr)->load(std::memory_order_relaxed);
}

inline Atomic32 Acquire_Load(volatile const Atomic32* ptr) {
  return ((AtomicLocation32)ptr)->load(std::memory_order_acquire);
}

inline Atomic32 Release_Load(volatile const Atomic32* ptr) {
  MemoryBarrier();
  return ((AtomicLocation32)ptr)->load(std::memory_order_relaxed);
}

#if defined(GOOGLE_PROTOBUF_ARCH_64_BIT)

typedef volatile std::atomic<Atomic64>* AtomicLocation64;
static_assert(sizeof(*(AtomicLocation64) nullptr) == sizeof(Atomic64),
              "incompatible 64-bit atomic layout");

inline Atomic64 NoBarrier_CompareAndSwap(volatile Atomic64* ptr,
                                         Atomic64 old_value,
                                         Atomic64 new_value) {
  ((AtomicLocation64)ptr)
      ->compare_exchange_strong(old_value,
                                new_value,
                                std::memory_order_relaxed,
                                std::memory_order_relaxed);
  return old_value;
}

inline Atomic64 NoBarrier_AtomicExchange(volatile Atomic64* ptr,
                                         Atomic64 new_value) {
  return ((AtomicLocation64)ptr)
      ->exchange(new_value, std::memory_order_relaxed);
}

inline Atomic64 NoBarrier_AtomicIncrement(volatile Atomic64* ptr,
                                          Atomic64 increment) {
  return increment +
         ((AtomicLocation64)ptr)
             ->fetch_add(increment, std::memory_order_relaxed);
}

inline Atomic64 Barrier_AtomicIncrement(volatile Atomic64* ptr,
                                        Atomic64 increment) {
  return increment + ((AtomicLocation64)ptr)->fetch_add(increment);
}

inline Atomic64 Acquire_CompareAndSwap(volatile Atomic64* ptr,
                                       Atomic64 old_value,
                                       Atomic64 new_value) {
  ((AtomicLocation64)ptr)
      ->compare_exchange_strong(old_value,
                                new_value,
                                std::memory_order_acquire,
                                std::memory_order_acquire);
  return old_value;
}

inline Atomic64 Release_CompareAndSwap(volatile Atomic64* ptr,
                                       Atomic64 old_value,
                                       Atomic64 new_value) {
  ((AtomicLocation64)ptr)
      ->compare_exchange_strong(old_value,
                                new_value,
                                std::memory_order_release,
                                std::memory_order_relaxed);
  return old_value;
}

inline void NoBarrier_Store(volatile Atomic64* ptr, Atomic64 value) {
  ((AtomicLocation64)ptr)->store(value, std::memory_order_relaxed);
}

inline void Acquire_Store(volatile Atomic64* ptr, Atomic64 value) {
  ((AtomicLocation64)ptr)->store(value, std::memory_order_relaxed);
  MemoryBarrier();
}

inline void Release_Store(volatile Atomic64* ptr, Atomic64 value) {
  ((AtomicLocation64)ptr)->store(value, std::memory_order_release);
}

inline Atomic64 NoBarrier_Load(volatile const Atomic64* ptr) {
  return ((AtomicLocation64)ptr)->load(std::memory_order_relaxed);
}

inline Atomic64 Acquire_Load(volatile const Atomic64* ptr) {
  return ((AtomicLocation64)ptr)->load(std::memory_order_acquire);
}

inline Atomic64 Release_Load(volatile const Atomic64* ptr) {
  MemoryBarrier();
  return ((AtomicLocation64)ptr)->load(std::memory_order_relaxed);
}

#endif  // defined(GOOGLE_PROTOBUF_ARCH_64_BIT)

}  // namespace internal
}  // namespace protobuf
}  // namespace google

#endif  // GOOGLE_PROTOBUF_ATOMICOPS_INTERNALS_PNACL_H_
