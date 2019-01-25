
#ifndef HEADER_ECDH_H
# define HEADER_ECDH_H

# include <openssl/opensslconf.h>

# ifdef OPENSSL_NO_ECDH
#  error ECDH is disabled.
# endif

# include <openssl/ec.h>
# include <openssl/ossl_typ.h>
# ifndef OPENSSL_NO_DEPRECATED
#  include <openssl/bn.h>
# endif

#ifdef __cplusplus
extern "C" {
#endif

# define EC_FLAG_COFACTOR_ECDH   0x1000

const ECDH_METHOD *ECDH_OpenSSL(void);

void ECDH_set_default_method(const ECDH_METHOD *);
const ECDH_METHOD *ECDH_get_default_method(void);
int ECDH_set_method(EC_KEY *, const ECDH_METHOD *);

int ECDH_compute_key(void *out, size_t outlen, const EC_POINT *pub_key,
                     EC_KEY *ecdh, void *(*KDF) (const void *in, size_t inlen,
                                                 void *out, size_t *outlen));

int ECDH_get_ex_new_index(long argl, void *argp, CRYPTO_EX_new
                          *new_func, CRYPTO_EX_dup *dup_func,
                          CRYPTO_EX_free *free_func);
int ECDH_set_ex_data(EC_KEY *d, int idx, void *arg);
void *ECDH_get_ex_data(EC_KEY *d, int idx);

int ECDH_KDF_X9_62(unsigned char *out, size_t outlen,
                   const unsigned char *Z, size_t Zlen,
                   const unsigned char *sinfo, size_t sinfolen,
                   const EVP_MD *md);

/* BEGIN ERROR CODES */
/*
 * The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */
void ERR_load_ECDH_strings(void);

/* Error codes for the ECDH functions. */

/* Function codes. */
# define ECDH_F_ECDH_CHECK                                102
# define ECDH_F_ECDH_COMPUTE_KEY                          100
# define ECDH_F_ECDH_DATA_NEW_METHOD                      101

/* Reason codes. */
# define ECDH_R_KDF_FAILED                                102
# define ECDH_R_NON_FIPS_METHOD                           103
# define ECDH_R_NO_PRIVATE_VALUE                          100
# define ECDH_R_POINT_ARITHMETIC_FAILURE                  101

#ifdef  __cplusplus
}
#endif
#endif
