
#ifndef ASIO_WAIT_TRAITS_HPP
#define ASIO_WAIT_TRAITS_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include "asio/detail/push_options.hpp"

namespace asio {

/// Wait traits suitable for use with the basic_waitable_timer class template.
template <typename Clock>
struct wait_traits
{
  /// Convert a clock duration into a duration used for waiting.
  /** 
   * @returns @c d.
   */
  static typename Clock::duration to_wait_duration(
      const typename Clock::duration& d)
  {
    return d;
  }
};

} // namespace asio

#include "asio/detail/pop_options.hpp"

#endif // ASIO_WAIT_TRAITS_HPP
