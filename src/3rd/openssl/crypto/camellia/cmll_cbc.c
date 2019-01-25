
#include <openssl/camellia.h>
#include <openssl/modes.h>

void Camellia_cbc_encrypt(const unsigned char *in, unsigned char *out,
                          size_t len, const CAMELLIA_KEY *key,
                          unsigned char *ivec, const int enc)
{

    if (enc)
        CRYPTO_cbc128_encrypt(in, out, len, key, ivec,
                              (block128_f) Camellia_encrypt);
    else
        CRYPTO_cbc128_decrypt(in, out, len, key, ivec,
                              (block128_f) Camellia_decrypt);
}
