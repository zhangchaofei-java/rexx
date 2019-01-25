

#ifndef WEBSOCKETPP_COMMON_SYSTEM_ERROR_HPP
#define WEBSOCKETPP_COMMON_SYSTEM_ERROR_HPP


#include <websocketpp/common/cpp11.hpp>

// If we've determined that we're in full C++11 mode and the user hasn't
// explicitly disabled the use of C++11 system_error header, then prefer it to
// boost.
#if defined _WEBSOCKETPP_CPP11_INTERNAL_ && !defined _WEBSOCKETPP_NO_CPP11_SYSTEM_ERROR_
    #ifndef _WEBSOCKETPP_CPP11_SYSTEM_ERROR_
        #define _WEBSOCKETPP_CPP11_SYSTEM_ERROR_
    #endif
#endif

// If we're on Visual Studio 2010 or higher and haven't explicitly disabled
// the use of C++11 system_error header then prefer it to boost.
#if defined(_MSC_VER) && _MSC_VER >= 1600 && !defined _WEBSOCKETPP_NO_CPP11_SYSTEM_ERROR_
    #ifndef _WEBSOCKETPP_CPP11_SYSTEM_ERROR_
        #define _WEBSOCKETPP_CPP11_SYSTEM_ERROR_
    #endif
#endif



#ifdef _WEBSOCKETPP_CPP11_SYSTEM_ERROR_
    #include <system_error>
#else
    #include <boost/system/error_code.hpp>
    #include <boost/system/system_error.hpp>
#endif

namespace websocketpp {
namespace lib {

#ifdef _WEBSOCKETPP_CPP11_SYSTEM_ERROR_
    using std::errc;
    using std::error_code;
    using std::error_category;
    using std::error_condition;
    using std::system_error;
    #define _WEBSOCKETPP_ERROR_CODE_ENUM_NS_START_ namespace std {
    #define _WEBSOCKETPP_ERROR_CODE_ENUM_NS_END_ }
#else
    namespace errc = boost::system::errc;
    using boost::system::error_code;
    using boost::system::error_category;
    using boost::system::error_condition;
    using boost::system::system_error;
    #define _WEBSOCKETPP_ERROR_CODE_ENUM_NS_START_ namespace boost { namespace system {
    #define _WEBSOCKETPP_ERROR_CODE_ENUM_NS_END_ }}
#endif

} // namespace lib
} // namespace websocketpp

#endif // WEBSOCKETPP_COMMON_SYSTEM_ERROR_HPP
