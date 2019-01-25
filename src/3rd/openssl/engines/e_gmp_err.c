
#include <stdio.h>
#include <openssl/err.h>
#include "e_gmp_err.h"

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(0,func,0)
# define ERR_REASON(reason) ERR_PACK(0,0,reason)

static ERR_STRING_DATA GMP_str_functs[] = {
    {ERR_FUNC(GMP_F_E_GMP_CTRL), "E_GMP_CTRL"},
    {ERR_FUNC(GMP_F_E_GMP_RSA_MOD_EXP), "E_GMP_RSA_MOD_EXP"},
    {0, NULL}
};

static ERR_STRING_DATA GMP_str_reasons[] = {
    {ERR_REASON(GMP_R_CTRL_COMMAND_NOT_IMPLEMENTED),
     "ctrl command not implemented"},
    {ERR_REASON(GMP_R_KEY_CONTEXT_ERROR), "key context error"},
    {ERR_REASON(GMP_R_MISSING_KEY_COMPONENTS), "missing key components"},
    {0, NULL}
};

#endif

#ifdef GMP_LIB_NAME
static ERR_STRING_DATA GMP_lib_name[] = {
    {0, GMP_LIB_NAME},
    {0, NULL}
};
#endif

static int GMP_lib_error_code = 0;
static int GMP_error_init = 1;

static void ERR_load_GMP_strings(void)
{
    if (GMP_lib_error_code == 0)
        GMP_lib_error_code = ERR_get_next_error_library();

    if (GMP_error_init) {
        GMP_error_init = 0;
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(GMP_lib_error_code, GMP_str_functs);
        ERR_load_strings(GMP_lib_error_code, GMP_str_reasons);
#endif

#ifdef GMP_LIB_NAME
        GMP_lib_name->error = ERR_PACK(GMP_lib_error_code, 0, 0);
        ERR_load_strings(0, GMP_lib_name);
#endif
    }
}

static void ERR_unload_GMP_strings(void)
{
    if (GMP_error_init == 0) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(GMP_lib_error_code, GMP_str_functs);
        ERR_unload_strings(GMP_lib_error_code, GMP_str_reasons);
#endif

#ifdef GMP_LIB_NAME
        ERR_unload_strings(0, GMP_lib_name);
#endif
        GMP_error_init = 1;
    }
}

static void ERR_GMP_error(int function, int reason, char *file, int line)
{
    if (GMP_lib_error_code == 0)
        GMP_lib_error_code = ERR_get_next_error_library();
    ERR_PUT_error(GMP_lib_error_code, function, reason, file, line);
}
