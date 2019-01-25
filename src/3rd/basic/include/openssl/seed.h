
#ifndef HEADER_SEED_H
# define HEADER_SEED_H

# include <openssl/opensslconf.h>
# include <openssl/e_os2.h>
# include <openssl/crypto.h>

# ifdef OPENSSL_NO_SEED
#  error SEED is disabled.
# endif

/* look whether we need 'long' to get 32 bits */
# ifdef AES_LONG
#  ifndef SEED_LONG
#   define SEED_LONG 1
#  endif
# endif

# if !defined(NO_SYS_TYPES_H)
#  include <sys/types.h>
# endif

# define SEED_BLOCK_SIZE 16
# define SEED_KEY_LENGTH 16


#ifdef  __cplusplus
extern "C" {
#endif

typedef struct seed_key_st {
# ifdef SEED_LONG
    unsigned long data[32];
# else
    unsigned int data[32];
# endif
} SEED_KEY_SCHEDULE;

# ifdef OPENSSL_FIPS
void private_SEED_set_key(const unsigned char rawkey[SEED_KEY_LENGTH],
                          SEED_KEY_SCHEDULE *ks);
# endif
void SEED_set_key(const unsigned char rawkey[SEED_KEY_LENGTH],
                  SEED_KEY_SCHEDULE *ks);

void SEED_encrypt(const unsigned char s[SEED_BLOCK_SIZE],
                  unsigned char d[SEED_BLOCK_SIZE],
                  const SEED_KEY_SCHEDULE *ks);
void SEED_decrypt(const unsigned char s[SEED_BLOCK_SIZE],
                  unsigned char d[SEED_BLOCK_SIZE],
                  const SEED_KEY_SCHEDULE *ks);

void SEED_ecb_encrypt(const unsigned char *in, unsigned char *out,
                      const SEED_KEY_SCHEDULE *ks, int enc);
void SEED_cbc_encrypt(const unsigned char *in, unsigned char *out, size_t len,
                      const SEED_KEY_SCHEDULE *ks,
                      unsigned char ivec[SEED_BLOCK_SIZE], int enc);
void SEED_cfb128_encrypt(const unsigned char *in, unsigned char *out,
                         size_t len, const SEED_KEY_SCHEDULE *ks,
                         unsigned char ivec[SEED_BLOCK_SIZE], int *num,
                         int enc);
void SEED_ofb128_encrypt(const unsigned char *in, unsigned char *out,
                         size_t len, const SEED_KEY_SCHEDULE *ks,
                         unsigned char ivec[SEED_BLOCK_SIZE], int *num);

#ifdef  __cplusplus
}
#endif

#endif                          /* HEADER_SEED_H */
