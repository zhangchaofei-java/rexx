
#ifndef GRPC_COMPRESSION_H
#define GRPC_COMPRESSION_H

#include <grpc/impl/codegen/port_platform.h>

#include <stdlib.h>

#include <grpc/impl/codegen/compression_types.h>
#include <grpc/slice.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Parses the first \a name_length bytes of \a name as a
 * grpc_compression_algorithm instance, updating \a algorithm. Returns 1 upon
 * success, 0 otherwise. */
GRPCAPI int grpc_compression_algorithm_parse(
    grpc_slice value, grpc_compression_algorithm *algorithm);

/** Updates \a name with the encoding name corresponding to a valid \a
 * algorithm. Note that \a name is statically allocated and must *not* be freed.
 * Returns 1 upon success, 0 otherwise. */
GRPCAPI int grpc_compression_algorithm_name(
    grpc_compression_algorithm algorithm, char **name);

/** Returns the compression algorithm corresponding to \a level for the
 * compression algorithms encoded in the \a accepted_encodings bitset.
 *
 * It abort()s for unknown levels . */
GRPCAPI grpc_compression_algorithm grpc_compression_algorithm_for_level(
    grpc_compression_level level, uint32_t accepted_encodings);

GRPCAPI void grpc_compression_options_init(grpc_compression_options *opts);

/** Mark \a algorithm as enabled in \a opts. */
GRPCAPI void grpc_compression_options_enable_algorithm(
    grpc_compression_options *opts, grpc_compression_algorithm algorithm);

/** Mark \a algorithm as disabled in \a opts. */
GRPCAPI void grpc_compression_options_disable_algorithm(
    grpc_compression_options *opts, grpc_compression_algorithm algorithm);

/** Returns true if \a algorithm is marked as enabled in \a opts. */
GRPCAPI int grpc_compression_options_is_algorithm_enabled(
    const grpc_compression_options *opts, grpc_compression_algorithm algorithm);

#ifdef __cplusplus
}
#endif

#endif /* GRPC_COMPRESSION_H */
