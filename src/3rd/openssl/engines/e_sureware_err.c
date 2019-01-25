
#include <stdio.h>
#include <openssl/err.h>
#include "e_sureware_err.h"

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(0,func,0)
# define ERR_REASON(reason) ERR_PACK(0,0,reason)

static ERR_STRING_DATA SUREWARE_str_functs[] = {
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_CTRL), "SUREWAREHK_CTRL"},
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_DH_EX_FREE), "SUREWAREHK_DH_EX_FREE"},
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_DSA_DO_SIGN), "SUREWAREHK_DSA_DO_SIGN"},
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_EX_FREE), "SUREWAREHK_EX_FREE"},
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_FINISH), "SUREWAREHK_FINISH"},
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_INIT), "SUREWAREHK_INIT"},
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_LOAD_PRIVKEY), "SUREWAREHK_LOAD_PRIVKEY"},
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_LOAD_PUBKEY), "SUREWAREHK_LOAD_PUBKEY"},
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_MODEXP), "SUREWAREHK_MODEXP"},
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_RAND_BYTES), "SUREWAREHK_RAND_BYTES"},
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_RAND_SEED), "SUREWAREHK_RAND_SEED"},
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_RSA_PRIV_DEC), "SUREWAREHK_RSA_PRIV_DEC"},
    {ERR_FUNC(SUREWARE_F_SUREWAREHK_RSA_SIGN), "SUREWAREHK_RSA_SIGN"},
    {ERR_FUNC(SUREWARE_F_SUREWARE_LOAD_PUBLIC), "SUREWARE_LOAD_PUBLIC"},
    {0, NULL}
};

static ERR_STRING_DATA SUREWARE_str_reasons[] = {
    {ERR_REASON(SUREWARE_R_BIO_WAS_FREED), "bio was freed"},
    {ERR_REASON(SUREWARE_R_MISSING_KEY_COMPONENTS), "missing key components"},
    {ERR_REASON(SUREWARE_R_PADDING_CHECK_FAILED), "padding check failed"},
    {ERR_REASON(SUREWARE_R_REQUEST_FAILED), "request failed"},
    {ERR_REASON(SUREWARE_R_REQUEST_FALLBACK), "request fallback"},
    {ERR_REASON(SUREWARE_R_SIZE_TOO_LARGE_OR_TOO_SMALL),
     "size too large or too small"},
    {ERR_REASON(SUREWARE_R_UNIT_FAILURE), "unit failure"},
    {ERR_REASON(SUREWARE_R_UNKNOWN_PADDING_TYPE), "unknown padding type"},
    {0, NULL}
};

#endif

#ifdef SUREWARE_LIB_NAME
static ERR_STRING_DATA SUREWARE_lib_name[] = {
    {0, SUREWARE_LIB_NAME},
    {0, NULL}
};
#endif

static int SUREWARE_lib_error_code = 0;
static int SUREWARE_error_init = 1;

static void ERR_load_SUREWARE_strings(void)
{
    if (SUREWARE_lib_error_code == 0)
        SUREWARE_lib_error_code = ERR_get_next_error_library();

    if (SUREWARE_error_init) {
        SUREWARE_error_init = 0;
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(SUREWARE_lib_error_code, SUREWARE_str_functs);
        ERR_load_strings(SUREWARE_lib_error_code, SUREWARE_str_reasons);
#endif

#ifdef SUREWARE_LIB_NAME
        SUREWARE_lib_name->error = ERR_PACK(SUREWARE_lib_error_code, 0, 0);
        ERR_load_strings(0, SUREWARE_lib_name);
#endif
    }
}

static void ERR_unload_SUREWARE_strings(void)
{
    if (SUREWARE_error_init == 0) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(SUREWARE_lib_error_code, SUREWARE_str_functs);
        ERR_unload_strings(SUREWARE_lib_error_code, SUREWARE_str_reasons);
#endif

#ifdef SUREWARE_LIB_NAME
        ERR_unload_strings(0, SUREWARE_lib_name);
#endif
        SUREWARE_error_init = 1;
    }
}

static void ERR_SUREWARE_error(int function, int reason, char *file, int line)
{
    if (SUREWARE_lib_error_code == 0)
        SUREWARE_lib_error_code = ERR_get_next_error_library();
    ERR_PUT_error(SUREWARE_lib_error_code, function, reason, file, line);
}
