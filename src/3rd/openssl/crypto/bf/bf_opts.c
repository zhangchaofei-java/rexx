

#if !defined(OPENSSL_SYS_MSDOS) && (!defined(OPENSSL_SYS_VMS) || defined(__DECC)) && !defined(OPENSSL_SYS_MACOSX)
# define TIMES
#endif

#include <stdio.h>

#include <openssl/e_os2.h>
#include OPENSSL_UNISTD_IO
OPENSSL_DECLARE_EXIT
#ifndef OPENSSL_SYS_NETWARE
# include <signal.h>
#endif
#ifndef _IRIX
# include <time.h>
#endif
#ifdef TIMES
# include <sys/types.h>
# include <sys/times.h>
#endif
    /*
     * Depending on the VMS version, the tms structure is perhaps defined.
     * The __TMS macro will show if it was.  If it wasn't defined, we should
     * undefine TIMES, since that tells the rest of the program how things
     * should be handled.  -- Richard Levitte
     */
#if defined(OPENSSL_SYS_VMS_DECC) && !defined(__TMS)
# undef TIMES
#endif
#ifndef TIMES
# include <sys/timeb.h>
#endif
#if defined(sun) || defined(__ultrix)
# define _POSIX_SOURCE
# include <limits.h>
# include <sys/param.h>
#endif
#include <openssl/blowfish.h>
#define BF_DEFAULT_OPTIONS
#undef BF_ENC
#define BF_encrypt  BF_encrypt_normal
#undef HEADER_BF_LOCL_H
#include "bf_enc.c"
#define BF_PTR
#undef BF_PTR2
#undef BF_ENC
#undef BF_encrypt
#define BF_encrypt  BF_encrypt_ptr
#undef HEADER_BF_LOCL_H
#include "bf_enc.c"
#undef BF_PTR
#define BF_PTR2
#undef BF_ENC
#undef BF_encrypt
#define BF_encrypt  BF_encrypt_ptr2
#undef HEADER_BF_LOCL_H
#include "bf_enc.c"
/* The following if from times(3) man page.  It may need to be changed */
#ifndef HZ
# ifndef CLK_TCK
#  ifndef _BSD_CLK_TCK_         /* FreeBSD fix */
#   define HZ   100.0
#  else                         /* _BSD_CLK_TCK_ */
#   define HZ ((double)_BSD_CLK_TCK_)
#  endif
# else                          /* CLK_TCK */
#  define HZ ((double)CLK_TCK)
# endif
#endif
#define BUFSIZE ((long)1024)
long run = 0;

double Time_F(int s);
#ifdef SIGALRM
# if defined(__STDC__) || defined(sgi)
#  define SIGRETTYPE void
# else
#  define SIGRETTYPE int
# endif

SIGRETTYPE sig_done(int sig);
SIGRETTYPE sig_done(int sig)
{
    signal(SIGALRM, sig_done);
    run = 0;
# ifdef LINT
    sig = sig;
# endif
}
#endif

#define START   0
#define STOP    1

double Time_F(int s)
{
    double ret;
#ifdef TIMES
    static struct tms tstart, tend;

    if (s == START) {
        times(&tstart);
        return (0);
    } else {
        times(&tend);
        ret = ((double)(tend.tms_utime - tstart.tms_utime)) / HZ;
        return ((ret == 0.0) ? 1e-6 : ret);
    }
#else                           /* !times() */
    static struct timeb tstart, tend;
    long i;

    if (s == START) {
        ftime(&tstart);
        return (0);
    } else {
        ftime(&tend);
        i = (long)tend.millitm - (long)tstart.millitm;
        ret = ((double)(tend.time - tstart.time)) + ((double)i) / 1000.0;
        return ((ret == 0.0) ? 1e-6 : ret);
    }
#endif
}

#ifdef SIGALRM
# define print_name(name) fprintf(stderr,"Doing %s's for 10 seconds\n",name); alarm(10);
#else
# define print_name(name) fprintf(stderr,"Doing %s %ld times\n",name,cb);
#endif

#define time_it(func,name,index) \
        print_name(name); \
        Time_F(START); \
        for (count=0,run=1; COND(cb); count+=4) \
                { \
                unsigned long d[2]; \
                func(d,&sch); \
                func(d,&sch); \
                func(d,&sch); \
                func(d,&sch); \
                } \
        tm[index]=Time_F(STOP); \
        fprintf(stderr,"%ld %s's in %.2f second\n",count,name,tm[index]); \
        tm[index]=((double)COUNT(cb))/tm[index];

#define print_it(name,index) \
        fprintf(stderr,"%s bytes per sec = %12.2f (%5.1fuS)\n",name, \
                tm[index]*8,1.0e6/tm[index]);

int main(int argc, char **argv)
{
    long count;
    static unsigned char buf[BUFSIZE];
    static char key[16] = { 0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0,
        0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0
    };
    BF_KEY sch;
    double d, tm[16], max = 0;
    int rank[16];
    char *str[16];
    int max_idx = 0, i, num = 0, j;
#ifndef SIGALARM
    long ca, cb, cc, cd, ce;
#endif

    for (i = 0; i < 12; i++) {
        tm[i] = 0.0;
        rank[i] = 0;
    }

#ifndef TIMES
    fprintf(stderr, "To get the most accurate results, try to run this\n");
    fprintf(stderr, "program when this computer is idle.\n");
#endif

    BF_set_key(&sch, 16, key);

#ifndef SIGALRM
    fprintf(stderr, "First we calculate the approximate speed ...\n");
    count = 10;
    do {
        long i;
        unsigned long data[2];

        count *= 2;
        Time_F(START);
        for (i = count; i; i--)
            BF_encrypt(data, &sch);
        d = Time_F(STOP);
    } while (d < 3.0);
    ca = count;
    cb = count * 3;
    cc = count * 3 * 8 / BUFSIZE + 1;
    cd = count * 8 / BUFSIZE + 1;

    ce = count / 20 + 1;
# define COND(d) (count != (d))
# define COUNT(d) (d)
#else
# define COND(c) (run)
# define COUNT(d) (count)
    signal(SIGALRM, sig_done);
    alarm(10);
#endif

    time_it(BF_encrypt_normal, "BF_encrypt_normal ", 0);
    time_it(BF_encrypt_ptr, "BF_encrypt_ptr    ", 1);
    time_it(BF_encrypt_ptr2, "BF_encrypt_ptr2   ", 2);
    num += 3;

    str[0] = "<nothing>";
    print_it("BF_encrypt_normal ", 0);
    max = tm[0];
    max_idx = 0;
    str[1] = "ptr      ";
    print_it("BF_encrypt_ptr ", 1);
    if (max < tm[1]) {
        max = tm[1];
        max_idx = 1;
    }
    str[2] = "ptr2     ";
    print_it("BF_encrypt_ptr2 ", 2);
    if (max < tm[2]) {
        max = tm[2];
        max_idx = 2;
    }

    printf("options    BF ecb/s\n");
    printf("%s %12.2f 100.0%%\n", str[max_idx], tm[max_idx]);
    d = tm[max_idx];
    tm[max_idx] = -2.0;
    max = -1.0;
    for (;;) {
        for (i = 0; i < 3; i++) {
            if (max < tm[i]) {
                max = tm[i];
                j = i;
            }
        }
        if (max < 0.0)
            break;
        printf("%s %12.2f  %4.1f%%\n", str[j], tm[j], tm[j] / d * 100.0);
        tm[j] = -2.0;
        max = -1.0;
    }

    switch (max_idx) {
    case 0:
        printf("-DBF_DEFAULT_OPTIONS\n");
        break;
    case 1:
        printf("-DBF_PTR\n");
        break;
    case 2:
        printf("-DBF_PTR2\n");
        break;
    }
    exit(0);
#if defined(LINT) || defined(OPENSSL_SYS_MSDOS)
    return (0);
#endif
}
