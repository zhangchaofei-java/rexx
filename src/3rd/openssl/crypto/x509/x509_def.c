
#include <stdio.h>
#include "cryptlib.h"
#include <openssl/crypto.h>
#include <openssl/x509.h>

const char *X509_get_default_private_dir(void)
{
    return (X509_PRIVATE_DIR);
}

const char *X509_get_default_cert_area(void)
{
    return (X509_CERT_AREA);
}

const char *X509_get_default_cert_dir(void)
{
    return (X509_CERT_DIR);
}

const char *X509_get_default_cert_file(void)
{
    return (X509_CERT_FILE);
}

const char *X509_get_default_cert_dir_env(void)
{
    return (X509_CERT_DIR_EVP);
}

const char *X509_get_default_cert_file_env(void)
{
    return (X509_CERT_FILE_EVP);
}
