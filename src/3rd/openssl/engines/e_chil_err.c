
#include <stdio.h>
#include <openssl/err.h>
#include "e_chil_err.h"

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(0,func,0)
# define ERR_REASON(reason) ERR_PACK(0,0,reason)

static ERR_STRING_DATA HWCRHK_str_functs[] = {
    {ERR_FUNC(HWCRHK_F_HWCRHK_CTRL), "HWCRHK_CTRL"},
    {ERR_FUNC(HWCRHK_F_HWCRHK_FINISH), "HWCRHK_FINISH"},
    {ERR_FUNC(HWCRHK_F_HWCRHK_GET_PASS), "HWCRHK_GET_PASS"},
    {ERR_FUNC(HWCRHK_F_HWCRHK_INIT), "HWCRHK_INIT"},
    {ERR_FUNC(HWCRHK_F_HWCRHK_INSERT_CARD), "HWCRHK_INSERT_CARD"},
    {ERR_FUNC(HWCRHK_F_HWCRHK_LOAD_PRIVKEY), "HWCRHK_LOAD_PRIVKEY"},
    {ERR_FUNC(HWCRHK_F_HWCRHK_LOAD_PUBKEY), "HWCRHK_LOAD_PUBKEY"},
    {ERR_FUNC(HWCRHK_F_HWCRHK_MOD_EXP), "HWCRHK_MOD_EXP"},
    {ERR_FUNC(HWCRHK_F_HWCRHK_RAND_BYTES), "HWCRHK_RAND_BYTES"},
    {ERR_FUNC(HWCRHK_F_HWCRHK_RSA_MOD_EXP), "HWCRHK_RSA_MOD_EXP"},
    {0, NULL}
};

static ERR_STRING_DATA HWCRHK_str_reasons[] = {
    {ERR_REASON(HWCRHK_R_ALREADY_LOADED), "already loaded"},
    {ERR_REASON(HWCRHK_R_BIO_WAS_FREED), "bio was freed"},
    {ERR_REASON(HWCRHK_R_CHIL_ERROR), "chil error"},
    {ERR_REASON(HWCRHK_R_CTRL_COMMAND_NOT_IMPLEMENTED),
     "ctrl command not implemented"},
    {ERR_REASON(HWCRHK_R_DSO_FAILURE), "dso failure"},
    {ERR_REASON(HWCRHK_R_MISSING_KEY_COMPONENTS), "missing key components"},
    {ERR_REASON(HWCRHK_R_NOT_INITIALISED), "not initialised"},
    {ERR_REASON(HWCRHK_R_NOT_LOADED), "not loaded"},
    {ERR_REASON(HWCRHK_R_NO_CALLBACK), "no callback"},
    {ERR_REASON(HWCRHK_R_NO_KEY), "no key"},
    {ERR_REASON(HWCRHK_R_PRIVATE_KEY_ALGORITHMS_DISABLED),
     "private key algorithms disabled"},
    {ERR_REASON(HWCRHK_R_REQUEST_FAILED), "request failed"},
    {ERR_REASON(HWCRHK_R_REQUEST_FALLBACK), "request fallback"},
    {ERR_REASON(HWCRHK_R_UNIT_FAILURE), "unit failure"},
    {0, NULL}
};

#endif

#ifdef HWCRHK_LIB_NAME
static ERR_STRING_DATA HWCRHK_lib_name[] = {
    {0, HWCRHK_LIB_NAME},
    {0, NULL}
};
#endif

static int HWCRHK_lib_error_code = 0;
static int HWCRHK_error_init = 1;

static void ERR_load_HWCRHK_strings(void)
{
    if (HWCRHK_lib_error_code == 0)
        HWCRHK_lib_error_code = ERR_get_next_error_library();

    if (HWCRHK_error_init) {
        HWCRHK_error_init = 0;
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(HWCRHK_lib_error_code, HWCRHK_str_functs);
        ERR_load_strings(HWCRHK_lib_error_code, HWCRHK_str_reasons);
#endif

#ifdef HWCRHK_LIB_NAME
        HWCRHK_lib_name->error = ERR_PACK(HWCRHK_lib_error_code, 0, 0);
        ERR_load_strings(0, HWCRHK_lib_name);
#endif
    }
}

static void ERR_unload_HWCRHK_strings(void)
{
    if (HWCRHK_error_init == 0) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(HWCRHK_lib_error_code, HWCRHK_str_functs);
        ERR_unload_strings(HWCRHK_lib_error_code, HWCRHK_str_reasons);
#endif

#ifdef HWCRHK_LIB_NAME
        ERR_unload_strings(0, HWCRHK_lib_name);
#endif
        HWCRHK_error_init = 1;
    }
}

static void ERR_HWCRHK_error(int function, int reason, char *file, int line)
{
    if (HWCRHK_lib_error_code == 0)
        HWCRHK_lib_error_code = ERR_get_next_error_library();
    ERR_PUT_error(HWCRHK_lib_error_code, function, reason, file, line);
}
