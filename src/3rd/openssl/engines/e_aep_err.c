
#include <stdio.h>
#include <openssl/err.h>
#include "e_aep_err.h"

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(0,func,0)
# define ERR_REASON(reason) ERR_PACK(0,0,reason)

static ERR_STRING_DATA AEPHK_str_functs[] = {
    {ERR_FUNC(AEPHK_F_AEP_CTRL), "AEP_CTRL"},
    {ERR_FUNC(AEPHK_F_AEP_FINISH), "AEP_FINISH"},
    {ERR_FUNC(AEPHK_F_AEP_GET_CONNECTION), "AEP_GET_CONNECTION"},
    {ERR_FUNC(AEPHK_F_AEP_INIT), "AEP_INIT"},
    {ERR_FUNC(AEPHK_F_AEP_MOD_EXP), "AEP_MOD_EXP"},
    {ERR_FUNC(AEPHK_F_AEP_MOD_EXP_CRT), "AEP_MOD_EXP_CRT"},
    {ERR_FUNC(AEPHK_F_AEP_RAND), "AEP_RAND"},
    {ERR_FUNC(AEPHK_F_AEP_RSA_MOD_EXP), "AEP_RSA_MOD_EXP"},
    {0, NULL}
};

static ERR_STRING_DATA AEPHK_str_reasons[] = {
    {ERR_REASON(AEPHK_R_ALREADY_LOADED), "already loaded"},
    {ERR_REASON(AEPHK_R_CLOSE_HANDLES_FAILED), "close handles failed"},
    {ERR_REASON(AEPHK_R_CONNECTIONS_IN_USE), "connections in use"},
    {ERR_REASON(AEPHK_R_CTRL_COMMAND_NOT_IMPLEMENTED),
     "ctrl command not implemented"},
    {ERR_REASON(AEPHK_R_FINALIZE_FAILED), "finalize failed"},
    {ERR_REASON(AEPHK_R_GET_HANDLE_FAILED), "get handle failed"},
    {ERR_REASON(AEPHK_R_GET_RANDOM_FAILED), "get random failed"},
    {ERR_REASON(AEPHK_R_INIT_FAILURE), "init failure"},
    {ERR_REASON(AEPHK_R_MISSING_KEY_COMPONENTS), "missing key components"},
    {ERR_REASON(AEPHK_R_MOD_EXP_CRT_FAILED), "mod exp crt failed"},
    {ERR_REASON(AEPHK_R_MOD_EXP_FAILED), "mod exp failed"},
    {ERR_REASON(AEPHK_R_NOT_LOADED), "not loaded"},
    {ERR_REASON(AEPHK_R_OK), "ok"},
    {ERR_REASON(AEPHK_R_RETURN_CONNECTION_FAILED),
     "return connection failed"},
    {ERR_REASON(AEPHK_R_SETBNCALLBACK_FAILURE), "setbncallback failure"},
    {ERR_REASON(AEPHK_R_SIZE_TOO_LARGE_OR_TOO_SMALL),
     "size too large or too small"},
    {ERR_REASON(AEPHK_R_UNIT_FAILURE), "unit failure"},
    {0, NULL}
};

#endif

#ifdef AEPHK_LIB_NAME
static ERR_STRING_DATA AEPHK_lib_name[] = {
    {0, AEPHK_LIB_NAME},
    {0, NULL}
};
#endif

static int AEPHK_lib_error_code = 0;
static int AEPHK_error_init = 1;

static void ERR_load_AEPHK_strings(void)
{
    if (AEPHK_lib_error_code == 0)
        AEPHK_lib_error_code = ERR_get_next_error_library();

    if (AEPHK_error_init) {
        AEPHK_error_init = 0;
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(AEPHK_lib_error_code, AEPHK_str_functs);
        ERR_load_strings(AEPHK_lib_error_code, AEPHK_str_reasons);
#endif

#ifdef AEPHK_LIB_NAME
        AEPHK_lib_name->error = ERR_PACK(AEPHK_lib_error_code, 0, 0);
        ERR_load_strings(0, AEPHK_lib_name);
#endif
    }
}

static void ERR_unload_AEPHK_strings(void)
{
    if (AEPHK_error_init == 0) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(AEPHK_lib_error_code, AEPHK_str_functs);
        ERR_unload_strings(AEPHK_lib_error_code, AEPHK_str_reasons);
#endif

#ifdef AEPHK_LIB_NAME
        ERR_unload_strings(0, AEPHK_lib_name);
#endif
        AEPHK_error_init = 1;
    }
}

static void ERR_AEPHK_error(int function, int reason, char *file, int line)
{
    if (AEPHK_lib_error_code == 0)
        AEPHK_lib_error_code = ERR_get_next_error_library();
    ERR_PUT_error(AEPHK_lib_error_code, function, reason, file, line);
}
