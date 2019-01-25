
#include <stdio.h>
#include <openssl/err.h>
#include <openssl/pem.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR

# define ERR_FUNC(func) ERR_PACK(ERR_LIB_PEM,func,0)
# define ERR_REASON(reason) ERR_PACK(ERR_LIB_PEM,0,reason)

static ERR_STRING_DATA PEM_str_functs[] = {
    {ERR_FUNC(PEM_F_B2I_DSS), "B2I_DSS"},
    {ERR_FUNC(PEM_F_B2I_PVK_BIO), "b2i_PVK_bio"},
    {ERR_FUNC(PEM_F_B2I_RSA), "B2I_RSA"},
    {ERR_FUNC(PEM_F_CHECK_BITLEN_DSA), "CHECK_BITLEN_DSA"},
    {ERR_FUNC(PEM_F_CHECK_BITLEN_RSA), "CHECK_BITLEN_RSA"},
    {ERR_FUNC(PEM_F_D2I_PKCS8PRIVATEKEY_BIO), "d2i_PKCS8PrivateKey_bio"},
    {ERR_FUNC(PEM_F_D2I_PKCS8PRIVATEKEY_FP), "d2i_PKCS8PrivateKey_fp"},
    {ERR_FUNC(PEM_F_DO_B2I), "DO_B2I"},
    {ERR_FUNC(PEM_F_DO_B2I_BIO), "DO_B2I_BIO"},
    {ERR_FUNC(PEM_F_DO_BLOB_HEADER), "DO_BLOB_HEADER"},
    {ERR_FUNC(PEM_F_DO_PK8PKEY), "DO_PK8PKEY"},
    {ERR_FUNC(PEM_F_DO_PK8PKEY_FP), "DO_PK8PKEY_FP"},
    {ERR_FUNC(PEM_F_DO_PVK_BODY), "DO_PVK_BODY"},
    {ERR_FUNC(PEM_F_DO_PVK_HEADER), "DO_PVK_HEADER"},
    {ERR_FUNC(PEM_F_I2B_PVK), "I2B_PVK"},
    {ERR_FUNC(PEM_F_I2B_PVK_BIO), "i2b_PVK_bio"},
    {ERR_FUNC(PEM_F_LOAD_IV), "LOAD_IV"},
    {ERR_FUNC(PEM_F_PEM_ASN1_READ), "PEM_ASN1_read"},
    {ERR_FUNC(PEM_F_PEM_ASN1_READ_BIO), "PEM_ASN1_read_bio"},
    {ERR_FUNC(PEM_F_PEM_ASN1_WRITE), "PEM_ASN1_write"},
    {ERR_FUNC(PEM_F_PEM_ASN1_WRITE_BIO), "PEM_ASN1_write_bio"},
    {ERR_FUNC(PEM_F_PEM_DEF_CALLBACK), "PEM_def_callback"},
    {ERR_FUNC(PEM_F_PEM_DO_HEADER), "PEM_do_header"},
    {ERR_FUNC(PEM_F_PEM_F_PEM_WRITE_PKCS8PRIVATEKEY),
     "PEM_F_PEM_WRITE_PKCS8PRIVATEKEY"},
    {ERR_FUNC(PEM_F_PEM_GET_EVP_CIPHER_INFO), "PEM_get_EVP_CIPHER_INFO"},
    {ERR_FUNC(PEM_F_PEM_PK8PKEY), "PEM_PK8PKEY"},
    {ERR_FUNC(PEM_F_PEM_READ), "PEM_read"},
    {ERR_FUNC(PEM_F_PEM_READ_BIO), "PEM_read_bio"},
    {ERR_FUNC(PEM_F_PEM_READ_BIO_DHPARAMS), "PEM_READ_BIO_DHPARAMS"},
    {ERR_FUNC(PEM_F_PEM_READ_BIO_PARAMETERS), "PEM_read_bio_Parameters"},
    {ERR_FUNC(PEM_F_PEM_READ_BIO_PRIVATEKEY), "PEM_READ_BIO_PRIVATEKEY"},
    {ERR_FUNC(PEM_F_PEM_READ_DHPARAMS), "PEM_READ_DHPARAMS"},
    {ERR_FUNC(PEM_F_PEM_READ_PRIVATEKEY), "PEM_READ_PRIVATEKEY"},
    {ERR_FUNC(PEM_F_PEM_SEALFINAL), "PEM_SealFinal"},
    {ERR_FUNC(PEM_F_PEM_SEALINIT), "PEM_SealInit"},
    {ERR_FUNC(PEM_F_PEM_SIGNFINAL), "PEM_SignFinal"},
    {ERR_FUNC(PEM_F_PEM_WRITE), "PEM_write"},
    {ERR_FUNC(PEM_F_PEM_WRITE_BIO), "PEM_write_bio"},
    {ERR_FUNC(PEM_F_PEM_WRITE_PRIVATEKEY), "PEM_WRITE_PRIVATEKEY"},
    {ERR_FUNC(PEM_F_PEM_X509_INFO_READ), "PEM_X509_INFO_read"},
    {ERR_FUNC(PEM_F_PEM_X509_INFO_READ_BIO), "PEM_X509_INFO_read_bio"},
    {ERR_FUNC(PEM_F_PEM_X509_INFO_WRITE_BIO), "PEM_X509_INFO_write_bio"},
    {0, NULL}
};

static ERR_STRING_DATA PEM_str_reasons[] = {
    {ERR_REASON(PEM_R_BAD_BASE64_DECODE), "bad base64 decode"},
    {ERR_REASON(PEM_R_BAD_DECRYPT), "bad decrypt"},
    {ERR_REASON(PEM_R_BAD_END_LINE), "bad end line"},
    {ERR_REASON(PEM_R_BAD_IV_CHARS), "bad iv chars"},
    {ERR_REASON(PEM_R_BAD_MAGIC_NUMBER), "bad magic number"},
    {ERR_REASON(PEM_R_BAD_PASSWORD_READ), "bad password read"},
    {ERR_REASON(PEM_R_BAD_VERSION_NUMBER), "bad version number"},
    {ERR_REASON(PEM_R_BIO_WRITE_FAILURE), "bio write failure"},
    {ERR_REASON(PEM_R_CIPHER_IS_NULL), "cipher is null"},
    {ERR_REASON(PEM_R_ERROR_CONVERTING_PRIVATE_KEY),
     "error converting private key"},
    {ERR_REASON(PEM_R_EXPECTING_PRIVATE_KEY_BLOB),
     "expecting private key blob"},
    {ERR_REASON(PEM_R_EXPECTING_PUBLIC_KEY_BLOB),
     "expecting public key blob"},
    {ERR_REASON(PEM_R_HEADER_TOO_LONG), "header too long"},
    {ERR_REASON(PEM_R_INCONSISTENT_HEADER), "inconsistent header"},
    {ERR_REASON(PEM_R_KEYBLOB_HEADER_PARSE_ERROR),
     "keyblob header parse error"},
    {ERR_REASON(PEM_R_KEYBLOB_TOO_SHORT), "keyblob too short"},
    {ERR_REASON(PEM_R_NOT_DEK_INFO), "not dek info"},
    {ERR_REASON(PEM_R_NOT_ENCRYPTED), "not encrypted"},
    {ERR_REASON(PEM_R_NOT_PROC_TYPE), "not proc type"},
    {ERR_REASON(PEM_R_NO_START_LINE), "no start line"},
    {ERR_REASON(PEM_R_PROBLEMS_GETTING_PASSWORD),
     "problems getting password"},
    {ERR_REASON(PEM_R_PUBLIC_KEY_NO_RSA), "public key no rsa"},
    {ERR_REASON(PEM_R_PVK_DATA_TOO_SHORT), "pvk data too short"},
    {ERR_REASON(PEM_R_PVK_TOO_SHORT), "pvk too short"},
    {ERR_REASON(PEM_R_READ_KEY), "read key"},
    {ERR_REASON(PEM_R_SHORT_HEADER), "short header"},
    {ERR_REASON(PEM_R_UNSUPPORTED_CIPHER), "unsupported cipher"},
    {ERR_REASON(PEM_R_UNSUPPORTED_ENCRYPTION), "unsupported encryption"},
    {ERR_REASON(PEM_R_UNSUPPORTED_KEY_COMPONENTS),
     "unsupported key components"},
    {0, NULL}
};

#endif

void ERR_load_PEM_strings(void)
{
#ifndef OPENSSL_NO_ERR

    if (ERR_func_error_string(PEM_str_functs[0].error) == NULL) {
        ERR_load_strings(0, PEM_str_functs);
        ERR_load_strings(0, PEM_str_reasons);
    }
#endif
}
