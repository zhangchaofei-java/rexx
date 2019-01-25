
#include <stdio.h>
#include <openssl/err.h>
#include "e_cswift_err.h"

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(0,func,0)
# define ERR_REASON(reason) ERR_PACK(0,0,reason)

static ERR_STRING_DATA CSWIFT_str_functs[] = {
    {ERR_FUNC(CSWIFT_F_CSWIFT_CTRL), "CSWIFT_CTRL"},
    {ERR_FUNC(CSWIFT_F_CSWIFT_DSA_SIGN), "CSWIFT_DSA_SIGN"},
    {ERR_FUNC(CSWIFT_F_CSWIFT_DSA_VERIFY), "CSWIFT_DSA_VERIFY"},
    {ERR_FUNC(CSWIFT_F_CSWIFT_FINISH), "CSWIFT_FINISH"},
    {ERR_FUNC(CSWIFT_F_CSWIFT_INIT), "CSWIFT_INIT"},
    {ERR_FUNC(CSWIFT_F_CSWIFT_MOD_EXP), "CSWIFT_MOD_EXP"},
    {ERR_FUNC(CSWIFT_F_CSWIFT_MOD_EXP_CRT), "CSWIFT_MOD_EXP_CRT"},
    {ERR_FUNC(CSWIFT_F_CSWIFT_RAND_BYTES), "CSWIFT_RAND_BYTES"},
    {ERR_FUNC(CSWIFT_F_CSWIFT_RSA_MOD_EXP), "CSWIFT_RSA_MOD_EXP"},
    {0, NULL}
};

static ERR_STRING_DATA CSWIFT_str_reasons[] = {
    {ERR_REASON(CSWIFT_R_ALREADY_LOADED), "already loaded"},
    {ERR_REASON(CSWIFT_R_BAD_KEY_SIZE), "bad key size"},
    {ERR_REASON(CSWIFT_R_BN_CTX_FULL), "bn ctx full"},
    {ERR_REASON(CSWIFT_R_BN_EXPAND_FAIL), "bn expand fail"},
    {ERR_REASON(CSWIFT_R_CTRL_COMMAND_NOT_IMPLEMENTED),
     "ctrl command not implemented"},
    {ERR_REASON(CSWIFT_R_MISSING_KEY_COMPONENTS), "missing key components"},
    {ERR_REASON(CSWIFT_R_NOT_LOADED), "not loaded"},
    {ERR_REASON(CSWIFT_R_REQUEST_FAILED), "request failed"},
    {ERR_REASON(CSWIFT_R_UNIT_FAILURE), "unit failure"},
    {0, NULL}
};

#endif

#ifdef CSWIFT_LIB_NAME
static ERR_STRING_DATA CSWIFT_lib_name[] = {
    {0, CSWIFT_LIB_NAME},
    {0, NULL}
};
#endif

static int CSWIFT_lib_error_code = 0;
static int CSWIFT_error_init = 1;

static void ERR_load_CSWIFT_strings(void)
{
    if (CSWIFT_lib_error_code == 0)
        CSWIFT_lib_error_code = ERR_get_next_error_library();

    if (CSWIFT_error_init) {
        CSWIFT_error_init = 0;
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(CSWIFT_lib_error_code, CSWIFT_str_functs);
        ERR_load_strings(CSWIFT_lib_error_code, CSWIFT_str_reasons);
#endif

#ifdef CSWIFT_LIB_NAME
        CSWIFT_lib_name->error = ERR_PACK(CSWIFT_lib_error_code, 0, 0);
        ERR_load_strings(0, CSWIFT_lib_name);
#endif
    }
}

static void ERR_unload_CSWIFT_strings(void)
{
    if (CSWIFT_error_init == 0) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(CSWIFT_lib_error_code, CSWIFT_str_functs);
        ERR_unload_strings(CSWIFT_lib_error_code, CSWIFT_str_reasons);
#endif

#ifdef CSWIFT_LIB_NAME
        ERR_unload_strings(0, CSWIFT_lib_name);
#endif
        CSWIFT_error_init = 1;
    }
}

static void ERR_CSWIFT_error(int function, int reason, char *file, int line)
{
    if (CSWIFT_lib_error_code == 0)
        CSWIFT_lib_error_code = ERR_get_next_error_library();
    ERR_PUT_error(CSWIFT_lib_error_code, function, reason, file, line);
}
