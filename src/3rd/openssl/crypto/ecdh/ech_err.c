
#include <stdio.h>
#include <openssl/err.h>
#include <openssl/ecdh.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_ECDH,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_ECDH,0,reason)

static ERR_STRING_DATA ECDH_str_functs[] = {
    {ERR_FUNC(ECDH_F_ECDH_CHECK), "ECDH_CHECK"},
    {ERR_FUNC(ECDH_F_ECDH_COMPUTE_KEY), "ECDH_compute_key"},
    {ERR_FUNC(ECDH_F_ECDH_DATA_NEW_METHOD), "ECDH_DATA_new_method"},
    {0, NULL}
};

static ERR_STRING_DATA ECDH_str_reasons[] = {
    {ERR_REASON(ECDH_R_KDF_FAILED), "KDF failed"},
    {ERR_REASON(ECDH_R_NON_FIPS_METHOD), "non fips method"},
    {ERR_REASON(ECDH_R_NO_PRIVATE_VALUE), "no private value"},
    {ERR_REASON(ECDH_R_POINT_ARITHMETIC_FAILURE), "point arithmetic failure"},
    {0, NULL}
};

#endif

void ERR_load_ECDH_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(ECDH_str_functs[0].error) == NULL) {
        ERR_load_strings(0, ECDH_str_functs);
        ERR_load_strings(0, ECDH_str_reasons);
    }
#endif
}
