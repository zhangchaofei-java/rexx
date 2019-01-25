

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/rand.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_RAND,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_RAND,0,reason)

static ERR_STRING_DATA RAND_str_functs[] = {
    {ERR_FUNC(RAND_F_RAND_GET_RAND_METHOD), "RAND_get_rand_method"},
    {ERR_FUNC(RAND_F_RAND_INIT_FIPS), "RAND_init_fips"},
    {ERR_FUNC(RAND_F_SSLEAY_RAND_BYTES), "SSLEAY_RAND_BYTES"},
    {0, NULL}
};

static ERR_STRING_DATA RAND_str_reasons[] = {
    {ERR_REASON(RAND_R_DUAL_EC_DRBG_DISABLED), "dual ec drbg disabled"},
    {ERR_REASON(RAND_R_ERROR_INITIALISING_DRBG), "error initialising drbg"},
    {ERR_REASON(RAND_R_ERROR_INSTANTIATING_DRBG), "error instantiating drbg"},
    {ERR_REASON(RAND_R_NO_FIPS_RANDOM_METHOD_SET),
     "no fips random method set"},
    {ERR_REASON(RAND_R_PRNG_NOT_SEEDED), "PRNG not seeded"},
    {0, NULL}
};

#endif

void ERR_load_RAND_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(RAND_str_functs[0].error) == NULL) {
        ERR_load_strings(0, RAND_str_functs);
        ERR_load_strings(0, RAND_str_reasons);
    }
#endif
}
