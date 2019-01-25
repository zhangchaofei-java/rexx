
#include <openssl/e_os2.h>
#include <openssl/rand.h>
#include <openssl/buffer.h>


#if defined(OPENSSL_SYS_WIN32) || defined(OPENSSL_SYS_VMS) || defined(OPENSSL_SYS_MSDOS) || defined(OPENSSL_SYS_VXWORKS) || defined(OPENSSL_SYS_NETWARE) || defined(OPENSSL_SYS_VOS) || defined(OPENSSL_SYS_BEOS)
int RAND_query_egd_bytes(const char *path, unsigned char *buf, int bytes)
{
    return (-1);
}

int RAND_egd(const char *path)
{
    return (-1);
}

int RAND_egd_bytes(const char *path, int bytes)
{
    return (-1);
}
#else
# include <openssl/opensslconf.h>
# include OPENSSL_UNISTD
# include <stddef.h>
# include <sys/types.h>
# include <sys/socket.h>
# ifndef NO_SYS_UN_H
#  ifdef OPENSSL_SYS_VXWORKS
#   include <streams/un.h>
#  else
#   include <sys/un.h>
#  endif
# else
struct sockaddr_un {
    short sun_family;           /* AF_UNIX */
    char sun_path[108];         /* path name (gag) */
};
# endif                         /* NO_SYS_UN_H */
# include <string.h>
# include <errno.h>

# ifndef offsetof
#  define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)
# endif

int RAND_query_egd_bytes(const char *path, unsigned char *buf, int bytes)
{
    int ret = 0;
    struct sockaddr_un addr;
    int len, num, numbytes;
    int fd = -1;
    int success;
    unsigned char egdbuf[2], tempbuf[255], *retrievebuf;

    memset(&addr, 0, sizeof(addr));
    addr.sun_family = AF_UNIX;
    if (strlen(path) >= sizeof(addr.sun_path))
        return (-1);
    BUF_strlcpy(addr.sun_path, path, sizeof addr.sun_path);
    len = offsetof(struct sockaddr_un, sun_path) + strlen(path);
    fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (fd == -1)
        return (-1);
    success = 0;
    while (!success) {
        if (connect(fd, (struct sockaddr *)&addr, len) == 0)
            success = 1;
        else {
            switch (errno) {
# ifdef EINTR
            case EINTR:
# endif
# ifdef EAGAIN
            case EAGAIN:
# endif
# ifdef EINPROGRESS
            case EINPROGRESS:
# endif
# ifdef EALREADY
            case EALREADY:
# endif
                /* No error, try again */
                break;
# ifdef EISCONN
            case EISCONN:
                success = 1;
                break;
# endif
            default:
                goto err;       /* failure */
            }
        }
    }

    while (bytes > 0) {
        egdbuf[0] = 1;
        egdbuf[1] = bytes < 255 ? bytes : 255;
        numbytes = 0;
        while (numbytes != 2) {
            num = write(fd, egdbuf + numbytes, 2 - numbytes);
            if (num >= 0)
                numbytes += num;
            else {
                switch (errno) {
# ifdef EINTR
                case EINTR:
# endif
# ifdef EAGAIN
                case EAGAIN:
# endif
                    /* No error, try again */
                    break;
                default:
                    ret = -1;
                    goto err;   /* failure */
                }
            }
        }
        numbytes = 0;
        while (numbytes != 1) {
            num = read(fd, egdbuf, 1);
            if (num == 0)
                goto err;       /* descriptor closed */
            else if (num > 0)
                numbytes += num;
            else {
                switch (errno) {
# ifdef EINTR
                case EINTR:
# endif
# ifdef EAGAIN
                case EAGAIN:
# endif
                    /* No error, try again */
                    break;
                default:
                    ret = -1;
                    goto err;   /* failure */
                }
            }
        }
        if (egdbuf[0] == 0)
            goto err;
        if (buf)
            retrievebuf = buf + ret;
        else
            retrievebuf = tempbuf;
        numbytes = 0;
        while (numbytes != egdbuf[0]) {
            num = read(fd, retrievebuf + numbytes, egdbuf[0] - numbytes);
            if (num == 0)
                goto err;       /* descriptor closed */
            else if (num > 0)
                numbytes += num;
            else {
                switch (errno) {
# ifdef EINTR
                case EINTR:
# endif
# ifdef EAGAIN
                case EAGAIN:
# endif
                    /* No error, try again */
                    break;
                default:
                    ret = -1;
                    goto err;   /* failure */
                }
            }
        }
        ret += egdbuf[0];
        bytes -= egdbuf[0];
        if (!buf)
            RAND_seed(tempbuf, egdbuf[0]);
    }
 err:
    if (fd != -1)
        close(fd);
    return (ret);
}

int RAND_egd_bytes(const char *path, int bytes)
{
    int num, ret = 0;

    num = RAND_query_egd_bytes(path, NULL, bytes);
    if (num < 1)
        goto err;
    if (RAND_status() == 1)
        ret = num;
 err:
    return (ret);
}

int RAND_egd(const char *path)
{
    return (RAND_egd_bytes(path, 255));
}

#endif
