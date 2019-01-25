
#include <stdio.h>
#include "cryptlib.h"
#include <openssl/evp.h>
#include <openssl/pkcs12.h>
#include <openssl/objects.h>

void OpenSSL_add_all_digests(void)
{
#ifndef OPENSSL_NO_MD4
    EVP_add_digest(EVP_md4());
#endif
#ifndef OPENSSL_NO_MD5
    EVP_add_digest(EVP_md5());
    EVP_add_digest_alias(SN_md5, "ssl2-md5");
    EVP_add_digest_alias(SN_md5, "ssl3-md5");
#endif
#if !defined(OPENSSL_NO_SHA) && !defined(OPENSSL_NO_SHA0)
    EVP_add_digest(EVP_sha());
# ifndef OPENSSL_NO_DSA
    EVP_add_digest(EVP_dss());
# endif
#endif
#if !defined(OPENSSL_NO_SHA) && !defined(OPENSSL_NO_SHA1)
    EVP_add_digest(EVP_sha1());
    EVP_add_digest_alias(SN_sha1, "ssl3-sha1");
    EVP_add_digest_alias(SN_sha1WithRSAEncryption, SN_sha1WithRSA);
# ifndef OPENSSL_NO_DSA
    EVP_add_digest(EVP_dss1());
    EVP_add_digest_alias(SN_dsaWithSHA1, SN_dsaWithSHA1_2);
    EVP_add_digest_alias(SN_dsaWithSHA1, "DSS1");
    EVP_add_digest_alias(SN_dsaWithSHA1, "dss1");
# endif
# ifndef OPENSSL_NO_ECDSA
    EVP_add_digest(EVP_ecdsa());
# endif
#endif
#if !defined(OPENSSL_NO_MDC2) && !defined(OPENSSL_NO_DES)
    EVP_add_digest(EVP_mdc2());
#endif
#ifndef OPENSSL_NO_RIPEMD
    EVP_add_digest(EVP_ripemd160());
    EVP_add_digest_alias(SN_ripemd160, "ripemd");
    EVP_add_digest_alias(SN_ripemd160, "rmd160");
#endif
#ifndef OPENSSL_NO_SHA256
    EVP_add_digest(EVP_sha224());
    EVP_add_digest(EVP_sha256());
#endif
#ifndef OPENSSL_NO_SHA512
    EVP_add_digest(EVP_sha384());
    EVP_add_digest(EVP_sha512());
#endif
#ifndef OPENSSL_NO_WHIRLPOOL
    EVP_add_digest(EVP_whirlpool());
#endif
}
