
#include <stdio.h>
#include "cryptlib.h"
#include <openssl/bn.h>
#include <openssl/rsa.h>
#include <openssl/rand.h>

int RSA_padding_add_none(unsigned char *to, int tlen,
                         const unsigned char *from, int flen)
{
    if (flen > tlen) {
        RSAerr(RSA_F_RSA_PADDING_ADD_NONE, RSA_R_DATA_TOO_LARGE_FOR_KEY_SIZE);
        return (0);
    }

    if (flen < tlen) {
        RSAerr(RSA_F_RSA_PADDING_ADD_NONE, RSA_R_DATA_TOO_SMALL_FOR_KEY_SIZE);
        return (0);
    }

    memcpy(to, from, (unsigned int)flen);
    return (1);
}

int RSA_padding_check_none(unsigned char *to, int tlen,
                           const unsigned char *from, int flen, int num)
{

    if (flen > tlen) {
        RSAerr(RSA_F_RSA_PADDING_CHECK_NONE, RSA_R_DATA_TOO_LARGE);
        return (-1);
    }

    memset(to, 0, tlen - flen);
    memcpy(to + tlen - flen, from, flen);
    return (tlen);
}
