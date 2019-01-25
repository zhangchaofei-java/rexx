
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "apps.h"
#include <openssl/bio.h>
#include <openssl/lhash.h>
#include <openssl/err.h>
#include <openssl/ssl.h>

#undef PROG
#define PROG    errstr_main

int MAIN(int, char **);

int MAIN(int argc, char **argv)
{
    int i, ret = 0;
    char buf[256];
    unsigned long l;

    apps_startup();

    if (bio_err == NULL)
        if ((bio_err = BIO_new(BIO_s_file())) != NULL)
            BIO_set_fp(bio_err, stderr, BIO_NOCLOSE | BIO_FP_TEXT);

    SSL_load_error_strings();

    if ((argc > 1) && (strcmp(argv[1], "-stats") == 0)) {
        BIO *out = NULL;

        out = BIO_new(BIO_s_file());
        if ((out != NULL) && BIO_set_fp(out, stdout, BIO_NOCLOSE)) {
#ifdef OPENSSL_SYS_VMS
            {
                BIO *tmpbio = BIO_new(BIO_f_linebuffer());
                out = BIO_push(tmpbio, out);
            }
#endif
            lh_ERR_STRING_DATA_node_stats_bio(ERR_get_string_table(), out);
            lh_ERR_STRING_DATA_stats_bio(ERR_get_string_table(), out);
            lh_ERR_STRING_DATA_node_usage_stats_bio(ERR_get_string_table(),
                                                    out);
        }
        if (out != NULL)
            BIO_free_all(out);
        argc--;
        argv++;
    }

    for (i = 1; i < argc; i++) {
        if (sscanf(argv[i], "%lx", &l)) {
            ERR_error_string_n(l, buf, sizeof buf);
            printf("%s\n", buf);
        } else {
            printf("%s: bad error code\n", argv[i]);
            printf("usage: errstr [-stats] <errno> ...\n");
            ret++;
        }
    }
    apps_shutdown();
    OPENSSL_EXIT(ret);
}
