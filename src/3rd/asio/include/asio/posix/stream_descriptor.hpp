
#ifndef ASIO_POSIX_STREAM_DESCRIPTOR_HPP
#define ASIO_POSIX_STREAM_DESCRIPTOR_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include "asio/detail/config.hpp"

#if defined(ASIO_HAS_POSIX_STREAM_DESCRIPTOR) \
  || defined(GENERATING_DOCUMENTATION)

#include "asio/posix/basic_stream_descriptor.hpp"

namespace asio {
namespace posix {

/// Typedef for the typical usage of a stream-oriented descriptor.
typedef basic_stream_descriptor<> stream_descriptor;

} // namespace posix
} // namespace asio

#endif // defined(ASIO_HAS_POSIX_STREAM_DESCRIPTOR)
       //   || defined(GENERATING_DOCUMENTATION)

#endif // ASIO_POSIX_STREAM_DESCRIPTOR_HPP
