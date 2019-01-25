
#include <stdio.h>
#include <openssl/err.h>
#include "e_nuron_err.h"

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(0,func,0)
# define ERR_REASON(reason) ERR_PACK(0,0,reason)

static ERR_STRING_DATA NURON_str_functs[] = {
    {ERR_FUNC(NURON_F_NURON_CTRL), "NURON_CTRL"},
    {ERR_FUNC(NURON_F_NURON_FINISH), "NURON_FINISH"},
    {ERR_FUNC(NURON_F_NURON_INIT), "NURON_INIT"},
    {ERR_FUNC(NURON_F_NURON_MOD_EXP), "NURON_MOD_EXP"},
    {0, NULL}
};

static ERR_STRING_DATA NURON_str_reasons[] = {
    {ERR_REASON(NURON_R_ALREADY_LOADED), "already loaded"},
    {ERR_REASON(NURON_R_CTRL_COMMAND_NOT_IMPLEMENTED),
     "ctrl command not implemented"},
    {ERR_REASON(NURON_R_DSO_FAILURE), "dso failure"},
    {ERR_REASON(NURON_R_DSO_FUNCTION_NOT_FOUND), "dso function not found"},
    {ERR_REASON(NURON_R_DSO_NOT_FOUND), "dso not found"},
    {ERR_REASON(NURON_R_NOT_LOADED), "not loaded"},
    {0, NULL}
};

#endif

#ifdef NURON_LIB_NAME
static ERR_STRING_DATA NURON_lib_name[] = {
    {0, NURON_LIB_NAME},
    {0, NULL}
};
#endif

static int NURON_lib_error_code = 0;
static int NURON_error_init = 1;

static void ERR_load_NURON_strings(void)
{
    if (NURON_lib_error_code == 0)
        NURON_lib_error_code = ERR_get_next_error_library();

    if (NURON_error_init) {
        NURON_error_init = 0;
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(NURON_lib_error_code, NURON_str_functs);
        ERR_load_strings(NURON_lib_error_code, NURON_str_reasons);
#endif

#ifdef NURON_LIB_NAME
        NURON_lib_name->error = ERR_PACK(NURON_lib_error_code, 0, 0);
        ERR_load_strings(0, NURON_lib_name);
#endif
    }
}

static void ERR_unload_NURON_strings(void)
{
    if (NURON_error_init == 0) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(NURON_lib_error_code, NURON_str_functs);
        ERR_unload_strings(NURON_lib_error_code, NURON_str_reasons);
#endif

#ifdef NURON_LIB_NAME
        ERR_unload_strings(0, NURON_lib_name);
#endif
        NURON_error_init = 1;
    }
}

static void ERR_NURON_error(int function, int reason, char *file, int line)
{
    if (NURON_lib_error_code == 0)
        NURON_lib_error_code = ERR_get_next_error_library();
    ERR_PUT_error(NURON_lib_error_code, function, reason, file, line);
}
