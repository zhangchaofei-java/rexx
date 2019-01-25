
#ifndef ASIO_DETAIL_COMPLETION_HANDLER_HPP
#define ASIO_DETAIL_COMPLETION_HANDLER_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif

#include "asio/detail/addressof.hpp"
#include "asio/detail/config.hpp"
#include "asio/detail/fenced_block.hpp"
#include "asio/detail/handler_alloc_helpers.hpp"
#include "asio/detail/handler_invoke_helpers.hpp"
#include "asio/detail/operation.hpp"

#include "asio/detail/push_options.hpp"

namespace asio {
namespace detail {

template <typename Handler>
class completion_handler : public operation
{
public:
  ASIO_DEFINE_HANDLER_PTR(completion_handler);

  completion_handler(Handler& h)
    : operation(&completion_handler::do_complete),
      handler_(ASIO_MOVE_CAST(Handler)(h))
  {
  }

  static void do_complete(io_service_impl* owner, operation* base,
      const asio::error_code& /*ec*/,
      std::size_t /*bytes_transferred*/)
  {
    completion_handler* h(static_cast<completion_handler*>(base));
    ptr p = { asio::detail::addressof(h->handler_), h, h };

    ASIO_HANDLER_COMPLETION((h));

    Handler handler(ASIO_MOVE_CAST(Handler)(h->handler_));
    p.h = asio::detail::addressof(handler);
    p.reset();

    if (owner)
    {
      fenced_block b(fenced_block::half);
      ASIO_HANDLER_INVOCATION_BEGIN(());
      asio_handler_invoke_helpers::invoke(handler, handler);
      ASIO_HANDLER_INVOCATION_END;
    }
  }

private:
  Handler handler_;
};

}
}

#include "asio/detail/pop_options.hpp"

#endif
