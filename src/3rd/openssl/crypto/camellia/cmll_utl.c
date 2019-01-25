
#include <openssl/opensslv.h>
#include <openssl/crypto.h>
#include <openssl/camellia.h>
#include "cmll_locl.h"

int Camellia_set_key(const unsigned char *userKey, const int bits,
                     CAMELLIA_KEY *key)
{
#ifdef OPENSSL_FIPS
    fips_cipher_abort(Camellia);
#endif
    return private_Camellia_set_key(userKey, bits, key);
}
