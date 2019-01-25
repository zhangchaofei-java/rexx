
#include <stdio.h>
#include <openssl/err.h>
#include <openssl/engine.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_ENGINE,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_ENGINE,0,reason)

static ERR_STRING_DATA ENGINE_str_functs[] = {
    {ERR_FUNC(ENGINE_F_DYNAMIC_CTRL), "DYNAMIC_CTRL"},
    {ERR_FUNC(ENGINE_F_DYNAMIC_GET_DATA_CTX), "DYNAMIC_GET_DATA_CTX"},
    {ERR_FUNC(ENGINE_F_DYNAMIC_LOAD), "DYNAMIC_LOAD"},
    {ERR_FUNC(ENGINE_F_DYNAMIC_SET_DATA_CTX), "DYNAMIC_SET_DATA_CTX"},
    {ERR_FUNC(ENGINE_F_ENGINE_ADD), "ENGINE_add"},
    {ERR_FUNC(ENGINE_F_ENGINE_BY_ID), "ENGINE_by_id"},
    {ERR_FUNC(ENGINE_F_ENGINE_CMD_IS_EXECUTABLE), "ENGINE_cmd_is_executable"},
    {ERR_FUNC(ENGINE_F_ENGINE_CTRL), "ENGINE_ctrl"},
    {ERR_FUNC(ENGINE_F_ENGINE_CTRL_CMD), "ENGINE_ctrl_cmd"},
    {ERR_FUNC(ENGINE_F_ENGINE_CTRL_CMD_STRING), "ENGINE_ctrl_cmd_string"},
    {ERR_FUNC(ENGINE_F_ENGINE_FINISH), "ENGINE_finish"},
    {ERR_FUNC(ENGINE_F_ENGINE_FREE_UTIL), "ENGINE_FREE_UTIL"},
    {ERR_FUNC(ENGINE_F_ENGINE_GET_CIPHER), "ENGINE_get_cipher"},
    {ERR_FUNC(ENGINE_F_ENGINE_GET_DEFAULT_TYPE), "ENGINE_GET_DEFAULT_TYPE"},
    {ERR_FUNC(ENGINE_F_ENGINE_GET_DIGEST), "ENGINE_get_digest"},
    {ERR_FUNC(ENGINE_F_ENGINE_GET_NEXT), "ENGINE_get_next"},
    {ERR_FUNC(ENGINE_F_ENGINE_GET_PKEY_ASN1_METH),
     "ENGINE_get_pkey_asn1_meth"},
    {ERR_FUNC(ENGINE_F_ENGINE_GET_PKEY_METH), "ENGINE_get_pkey_meth"},
    {ERR_FUNC(ENGINE_F_ENGINE_GET_PREV), "ENGINE_get_prev"},
    {ERR_FUNC(ENGINE_F_ENGINE_INIT), "ENGINE_init"},
    {ERR_FUNC(ENGINE_F_ENGINE_LIST_ADD), "ENGINE_LIST_ADD"},
    {ERR_FUNC(ENGINE_F_ENGINE_LIST_REMOVE), "ENGINE_LIST_REMOVE"},
    {ERR_FUNC(ENGINE_F_ENGINE_LOAD_PRIVATE_KEY), "ENGINE_load_private_key"},
    {ERR_FUNC(ENGINE_F_ENGINE_LOAD_PUBLIC_KEY), "ENGINE_load_public_key"},
    {ERR_FUNC(ENGINE_F_ENGINE_LOAD_SSL_CLIENT_CERT),
     "ENGINE_load_ssl_client_cert"},
    {ERR_FUNC(ENGINE_F_ENGINE_NEW), "ENGINE_new"},
    {ERR_FUNC(ENGINE_F_ENGINE_REMOVE), "ENGINE_remove"},
    {ERR_FUNC(ENGINE_F_ENGINE_SET_DEFAULT_STRING),
     "ENGINE_set_default_string"},
    {ERR_FUNC(ENGINE_F_ENGINE_SET_DEFAULT_TYPE), "ENGINE_SET_DEFAULT_TYPE"},
    {ERR_FUNC(ENGINE_F_ENGINE_SET_ID), "ENGINE_set_id"},
    {ERR_FUNC(ENGINE_F_ENGINE_SET_NAME), "ENGINE_set_name"},
    {ERR_FUNC(ENGINE_F_ENGINE_TABLE_REGISTER), "ENGINE_TABLE_REGISTER"},
    {ERR_FUNC(ENGINE_F_ENGINE_UNLOAD_KEY), "ENGINE_UNLOAD_KEY"},
    {ERR_FUNC(ENGINE_F_ENGINE_UNLOCKED_FINISH), "ENGINE_UNLOCKED_FINISH"},
    {ERR_FUNC(ENGINE_F_ENGINE_UP_REF), "ENGINE_up_ref"},
    {ERR_FUNC(ENGINE_F_INT_CTRL_HELPER), "INT_CTRL_HELPER"},
    {ERR_FUNC(ENGINE_F_INT_ENGINE_CONFIGURE), "INT_ENGINE_CONFIGURE"},
    {ERR_FUNC(ENGINE_F_INT_ENGINE_MODULE_INIT), "INT_ENGINE_MODULE_INIT"},
    {ERR_FUNC(ENGINE_F_LOG_MESSAGE), "LOG_MESSAGE"},
    {0, NULL}
};

static ERR_STRING_DATA ENGINE_str_reasons[] = {
    {ERR_REASON(ENGINE_R_ALREADY_LOADED), "already loaded"},
    {ERR_REASON(ENGINE_R_ARGUMENT_IS_NOT_A_NUMBER),
     "argument is not a number"},
    {ERR_REASON(ENGINE_R_CMD_NOT_EXECUTABLE), "cmd not executable"},
    {ERR_REASON(ENGINE_R_COMMAND_TAKES_INPUT), "command takes input"},
    {ERR_REASON(ENGINE_R_COMMAND_TAKES_NO_INPUT), "command takes no input"},
    {ERR_REASON(ENGINE_R_CONFLICTING_ENGINE_ID), "conflicting engine id"},
    {ERR_REASON(ENGINE_R_CTRL_COMMAND_NOT_IMPLEMENTED),
     "ctrl command not implemented"},
    {ERR_REASON(ENGINE_R_DH_NOT_IMPLEMENTED), "dh not implemented"},
    {ERR_REASON(ENGINE_R_DSA_NOT_IMPLEMENTED), "dsa not implemented"},
    {ERR_REASON(ENGINE_R_DSO_FAILURE), "DSO failure"},
    {ERR_REASON(ENGINE_R_DSO_NOT_FOUND), "dso not found"},
    {ERR_REASON(ENGINE_R_ENGINES_SECTION_ERROR), "engines section error"},
    {ERR_REASON(ENGINE_R_ENGINE_CONFIGURATION_ERROR),
     "engine configuration error"},
    {ERR_REASON(ENGINE_R_ENGINE_IS_NOT_IN_LIST), "engine is not in the list"},
    {ERR_REASON(ENGINE_R_ENGINE_SECTION_ERROR), "engine section error"},
    {ERR_REASON(ENGINE_R_FAILED_LOADING_PRIVATE_KEY),
     "failed loading private key"},
    {ERR_REASON(ENGINE_R_FAILED_LOADING_PUBLIC_KEY),
     "failed loading public key"},
    {ERR_REASON(ENGINE_R_FINISH_FAILED), "finish failed"},
    {ERR_REASON(ENGINE_R_GET_HANDLE_FAILED),
     "could not obtain hardware handle"},
    {ERR_REASON(ENGINE_R_ID_OR_NAME_MISSING), "'id' or 'name' missing"},
    {ERR_REASON(ENGINE_R_INIT_FAILED), "init failed"},
    {ERR_REASON(ENGINE_R_INTERNAL_LIST_ERROR), "internal list error"},
    {ERR_REASON(ENGINE_R_INVALID_ARGUMENT), "invalid argument"},
    {ERR_REASON(ENGINE_R_INVALID_CMD_NAME), "invalid cmd name"},
    {ERR_REASON(ENGINE_R_INVALID_CMD_NUMBER), "invalid cmd number"},
    {ERR_REASON(ENGINE_R_INVALID_INIT_VALUE), "invalid init value"},
    {ERR_REASON(ENGINE_R_INVALID_STRING), "invalid string"},
    {ERR_REASON(ENGINE_R_NOT_INITIALISED), "not initialised"},
    {ERR_REASON(ENGINE_R_NOT_LOADED), "not loaded"},
    {ERR_REASON(ENGINE_R_NO_CONTROL_FUNCTION), "no control function"},
    {ERR_REASON(ENGINE_R_NO_INDEX), "no index"},
    {ERR_REASON(ENGINE_R_NO_LOAD_FUNCTION), "no load function"},
    {ERR_REASON(ENGINE_R_NO_REFERENCE), "no reference"},
    {ERR_REASON(ENGINE_R_NO_SUCH_ENGINE), "no such engine"},
    {ERR_REASON(ENGINE_R_NO_UNLOAD_FUNCTION), "no unload function"},
    {ERR_REASON(ENGINE_R_PROVIDE_PARAMETERS), "provide parameters"},
    {ERR_REASON(ENGINE_R_RSA_NOT_IMPLEMENTED), "rsa not implemented"},
    {ERR_REASON(ENGINE_R_UNIMPLEMENTED_CIPHER), "unimplemented cipher"},
    {ERR_REASON(ENGINE_R_UNIMPLEMENTED_DIGEST), "unimplemented digest"},
    {ERR_REASON(ENGINE_R_UNIMPLEMENTED_PUBLIC_KEY_METHOD),
     "unimplemented public key method"},
    {ERR_REASON(ENGINE_R_VERSION_INCOMPATIBILITY), "version incompatibility"},
    {0, NULL}
};

#endif

void ERR_load_ENGINE_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(ENGINE_str_functs[0].error) == NULL) {
        ERR_load_strings(0, ENGINE_str_functs);
        ERR_load_strings(0, ENGINE_str_reasons);
    }
#endif
}
