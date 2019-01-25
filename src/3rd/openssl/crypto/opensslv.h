#ifndef HEADER_OPENSSLV_H
# define HEADER_OPENSSLV_H

#ifdef  __cplusplus
extern "C" {
#endif

# define OPENSSL_VERSION_NUMBER  0x100020afL
# ifdef OPENSSL_FIPS
#  define OPENSSL_VERSION_TEXT    "OpenSSL 1.0.2j-fips  26 Sep 2016"
# else
#  define OPENSSL_VERSION_TEXT    "OpenSSL 1.0.2j  26 Sep 2016"
# endif
# define OPENSSL_VERSION_PTEXT   " part of " OPENSSL_VERSION_TEXT

/*-
 * The macros below are to be used for shared library (.so, .dll, ...)
 * versioning.  That kind of versioning works a bit differently between
 * operating systems.  The most usual scheme is to set a major and a minor
 * number, and have the runtime loader check that the major number is equal
 * to what it was at application link time, while the minor number has to
 * be greater or equal to what it was at application link time.  With this
 * scheme, the version number is usually part of the file name, like this:
 *
 *      libcrypto.so.0.9
 *
 * Some unixen also make a softlink with the major verson number only:
 *
 *      libcrypto.so.0
 *
 * On Tru64 and IRIX 6.x it works a little bit differently.  There, the
 * shared library version is stored in the file, and is actually a series
 * of versions, separated by colons.  The rightmost version present in the
 * library when linking an application is stored in the application to be
 * matched at run time.  When the application is run, a check is done to
 * see if the library version stored in the application matches any of the
 * versions in the version string of the library itself.
 * This version string can be constructed in any way, depending on what
 * kind of matching is desired.  However, to implement the same scheme as
 * the one used in the other unixen, all compatible versions, from lowest
 * to highest, should be part of the string.  Consecutive builds would
 * give the following versions strings:
 *
 *      3.0
 *      3.0:3.1
 *      3.0:3.1:3.2
 *      4.0
 *      4.0:4.1
 *
 * Notice how version 4 is completely incompatible with version, and
 * therefore give the breach you can see.
 *
 * There may be other schemes as well that I haven't yet discovered.
 *
 * So, here's the way it works here: first of all, the library version
 * number doesn't need at all to match the overall OpenSSL version.
 * However, it's nice and more understandable if it actually does.
 * The current library version is stored in the macro SHLIB_VERSION_NUMBER,
 * which is just a piece of text in the format "M.m.e" (Major, minor, edit).
 * For the sake of Tru64, IRIX, and any other OS that behaves in similar ways,
 * we need to keep a history of version numbers, which is done in the
 * macro SHLIB_VERSION_HISTORY.  The numbers are separated by colons and
 * should only keep the versions that are binary compatible with the current.
 */
# define SHLIB_VERSION_HISTORY ""
# define SHLIB_VERSION_NUMBER "1.0.0"


#ifdef  __cplusplus
}
#endif
#endif                          /* HEADER_OPENSSLV_H */
