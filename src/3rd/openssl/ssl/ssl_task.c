
#include <stdlib.h>
#include <stdio.h>
#include <iodef.h>              /* VMS IO$_ definitions */
#include <descrip.h>            /* VMS string descriptors */
extern int SYS$QIOW(), SYS$ASSIGN();
int LIB$INIT_TIMER(), LIB$SHOW_TIMER();

#include <string.h>             /* from ssltest.c */
#include <errno.h>

#include "e_os.h"

#include <openssl/buffer.h>
#include <openssl/x509.h>
#include <openssl/ssl.h>
#include <openssl/err.h>

int MS_CALLBACK verify_callback(int ok, X509 *xs, X509 *xi, int depth,
                                int error);
BIO *bio_err = NULL;
BIO *bio_stdout = NULL;
BIO_METHOD *BIO_s_rtcp();

static char *cipher = NULL;
int verbose = 1;
#ifdef FIONBIO
static int s_nbio = 0;
#endif
#define TEST_SERVER_CERT "SSL_SERVER_CERTIFICATE"
/*************************************************************************/
/* Should have member alignment inhibited */
struct rpc_msg {
    /* 'A'-app data. 'R'-remote client 'G'-global */
    char channel;
    /* 'G'-get, 'P'-put, 'C'-confirm, 'X'-close */
    char function;
    /* Amount of data returned or max to return */
    unsigned short int length;
    /* variable data */
    char data[4092];
};
#define RPC_HDR_SIZE (sizeof(struct rpc_msg) - 4092)

static $DESCRIPTOR(sysnet, "SYS$NET");
typedef unsigned short io_channel;

struct io_status {
    unsigned short status;
    unsigned short count;
    unsigned long stsval;
};
int doit(io_channel chan, SSL_CTX *s_ctx);
/*****************************************************************************/
/*
 * Decnet I/O routines.
 */
static int get(io_channel chan, char *buffer, int maxlen, int *length)
{
    int status;
    struct io_status iosb;
    status = SYS$QIOW(0, chan, IO$_READVBLK, &iosb, 0, 0,
                      buffer, maxlen, 0, 0, 0, 0);
    if ((status & 1) == 1)
        status = iosb.status;
    if ((status & 1) == 1)
        *length = iosb.count;
    return status;
}

static int put(io_channel chan, char *buffer, int length)
{
    int status;
    struct io_status iosb;
    status = SYS$QIOW(0, chan, IO$_WRITEVBLK, &iosb, 0, 0,
                      buffer, length, 0, 0, 0, 0);
    if ((status & 1) == 1)
        status = iosb.status;
    return status;
}

/***************************************************************************/
/*
 * Handle operations on the 'G' channel.
 */
static int general_request(io_channel chan, struct rpc_msg *msg, int length)
{
    return 48;
}

/***************************************************************************/
int main(int argc, char **argv)
{
    int status, length;
    io_channel chan;
    struct rpc_msg msg;

    char *CApath = NULL, *CAfile = NULL;
    int badop = 0;
    int ret = 1;
    int client_auth = 0;
    int server_auth = 0;
    SSL_CTX *s_ctx = NULL;
    /*
     * Confirm logical link with initiating client.
     */
    LIB$INIT_TIMER();
    status = SYS$ASSIGN(&sysnet, &chan, 0, 0, 0);
    printf("status of assign to SYS$NET: %d\n", status);
    /*
     * Initialize standard out and error files.
     */
    if (bio_err == NULL)
        if ((bio_err = BIO_new(BIO_s_file())) != NULL)
            BIO_set_fp(bio_err, stderr, BIO_NOCLOSE);
    if (bio_stdout == NULL)
        if ((bio_stdout = BIO_new(BIO_s_file())) != NULL)
            BIO_set_fp(bio_stdout, stdout, BIO_NOCLOSE);
    /*
     * get the preferred cipher list and other initialization
     */
    if (cipher == NULL)
        cipher = getenv("SSL_CIPHER");
    printf("cipher list: %s\n", cipher ? cipher : "{undefined}");

    SSL_load_error_strings();
    OpenSSL_add_all_algorithms();

    /*
     * DRM, this was the original, but there is no such thing as SSLv2()
     * s_ctx=SSL_CTX_new(SSLv2());
     */
    s_ctx = SSL_CTX_new(SSLv2_server_method());

    if (s_ctx == NULL)
        goto end;

    SSL_CTX_use_certificate_file(s_ctx, TEST_SERVER_CERT, SSL_FILETYPE_PEM);
    SSL_CTX_use_RSAPrivateKey_file(s_ctx, TEST_SERVER_CERT, SSL_FILETYPE_PEM);
    printf("Loaded server certificate: '%s'\n", TEST_SERVER_CERT);

    /*
     * Take commands from client until bad status.
     */
    LIB$SHOW_TIMER();
    status = doit(chan, s_ctx);
    LIB$SHOW_TIMER();
    /*
     * do final cleanup and exit.
     */
 end:
    if (s_ctx != NULL)
        SSL_CTX_free(s_ctx);
    LIB$SHOW_TIMER();
    return 1;
}

int doit(io_channel chan, SSL_CTX *s_ctx)
{
    int status, length, link_state;
    struct rpc_msg msg;

    SSL *s_ssl = NULL;
    BIO *c_to_s = NULL;
    BIO *s_to_c = NULL;
    BIO *c_bio = NULL;
    BIO *s_bio = NULL;
    int i;
    int done = 0;

    s_ssl = SSL_new(s_ctx);
    if (s_ssl == NULL)
        goto err;

    c_to_s = BIO_new(BIO_s_rtcp());
    s_to_c = BIO_new(BIO_s_rtcp());
    if ((s_to_c == NULL) || (c_to_s == NULL))
        goto err;
/*- original, DRM 24-SEP-1997
    BIO_set_fd ( c_to_s, "", chan );
    BIO_set_fd ( s_to_c, "", chan );
*/
    BIO_set_fd(c_to_s, 0, chan);
    BIO_set_fd(s_to_c, 0, chan);

    c_bio = BIO_new(BIO_f_ssl());
    s_bio = BIO_new(BIO_f_ssl());
    if ((c_bio == NULL) || (s_bio == NULL))
        goto err;

    SSL_set_accept_state(s_ssl);
    SSL_set_bio(s_ssl, c_to_s, s_to_c);
    BIO_set_ssl(s_bio, s_ssl, BIO_CLOSE);

    /* We can always do writes */
    printf("Begin doit main loop\n");
    /*
     * Link states: 0-idle, 1-read pending, 2-write pending, 3-closed.
     */
    for (link_state = 0; link_state < 3;) {
        /*
         * Wait for remote end to request data action on A channel.
         */
        while (link_state == 0) {
            status = get(chan, (char *)&msg, sizeof(msg), &length);
            if ((status & 1) == 0) {
                printf("Error in main loop get: %d\n", status);
                link_state = 3;
                break;
            }
            if (length < RPC_HDR_SIZE) {
                printf("Error in main loop get size: %d\n", length);
                break;
                link_state = 3;
            }
            if (msg.channel != 'A') {
                printf("Error in main loop, unexpected channel: %c\n",
                       msg.channel);
                break;
                link_state = 3;
            }
            if (msg.function == 'G') {
                link_state = 1;
            } else if (msg.function == 'P') {
                link_state = 2; /* write pending */
            } else if (msg.function == 'X') {
                link_state = 3;
            } else {
                link_state = 3;
            }
        }
        if (link_state == 1) {
            i = BIO_read(s_bio, msg.data, msg.length);
            if (i < 0)
                link_state = 3;
            else {
                msg.channel = 'A';
                msg.function = 'C'; /* confirm */
                msg.length = i;
                status = put(chan, (char *)&msg, i + RPC_HDR_SIZE);
                if ((status & 1) == 0)
                    break;
                link_state = 0;
            }
        } else if (link_state == 2) {
            i = BIO_write(s_bio, msg.data, msg.length);
            if (i < 0)
                link_state = 3;
            else {
                msg.channel = 'A';
                msg.function = 'C'; /* confirm */
                msg.length = 0;
                status = put(chan, (char *)&msg, RPC_HDR_SIZE);
                if ((status & 1) == 0)
                    break;
                link_state = 0;
            }
        }
    }
    fprintf(stdout, "DONE\n");
 err:
    /*
     * We have to set the BIO's to NULL otherwise they will be free()ed
     * twice.  Once when th s_ssl is SSL_free()ed and again when c_ssl is
     * SSL_free()ed. This is a hack required because s_ssl and c_ssl are
     * sharing the same BIO structure and SSL_set_bio() and SSL_free()
     * automatically BIO_free non NULL entries. You should not normally do
     * this or be required to do this
     */
    s_ssl->rbio = NULL;
    s_ssl->wbio = NULL;

    if (c_to_s != NULL)
        BIO_free(c_to_s);
    if (s_to_c != NULL)
        BIO_free(s_to_c);
    if (c_bio != NULL)
        BIO_free(c_bio);
    if (s_bio != NULL)
        BIO_free(s_bio);
    return (0);
}
