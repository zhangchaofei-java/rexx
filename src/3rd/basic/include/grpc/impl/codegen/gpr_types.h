
#ifndef GRPC_IMPL_CODEGEN_GPR_TYPES_H
#define GRPC_IMPL_CODEGEN_GPR_TYPES_H

#include <grpc/impl/codegen/port_platform.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* The clocks we support. */
typedef enum {
  /* Monotonic clock. Epoch undefined. Always moves forwards. */
  GPR_CLOCK_MONOTONIC = 0,
  /* Realtime clock. May jump forwards or backwards. Settable by
     the system administrator. Has its epoch at 0:00:00 UTC 1 Jan 1970. */
  GPR_CLOCK_REALTIME,
  /* CPU cycle time obtained by rdtsc instruction on x86 platforms. Epoch
     undefined. Degrades to GPR_CLOCK_REALTIME on other platforms. */
  GPR_CLOCK_PRECISE,
  /* Unmeasurable clock type: no base, created by taking the difference
     between two times */
  GPR_TIMESPAN
} gpr_clock_type;

/* Analogous to struct timespec. On some machines, absolute times may be in
 * local time. */
typedef struct gpr_timespec {
  int64_t tv_sec;
  int32_t tv_nsec;
  /** Against which clock was this time measured? (or GPR_TIMESPAN if
      this is a relative time meaure) */
  gpr_clock_type clock_type;
} gpr_timespec;

#ifdef __cplusplus
}
#endif

#endif /* GRPC_IMPL_CODEGEN_GPR_TYPES_H */
