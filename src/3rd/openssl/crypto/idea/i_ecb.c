
#include <openssl/idea.h>
#include "idea_lcl.h"
#include <openssl/opensslv.h>

const char IDEA_version[] = "IDEA" OPENSSL_VERSION_PTEXT;

const char *idea_options(void)
{
    if (sizeof(short) != sizeof(IDEA_INT))
        return ("idea(int)");
    else
        return ("idea(short)");
}

void idea_ecb_encrypt(const unsigned char *in, unsigned char *out,
                      IDEA_KEY_SCHEDULE *ks)
{
    unsigned long l0, l1, d[2];

    n2l(in, l0);
    d[0] = l0;
    n2l(in, l1);
    d[1] = l1;
    idea_encrypt(d, ks);
    l0 = d[0];
    l2n(l0, out);
    l1 = d[1];
    l2n(l1, out);
    l0 = l1 = d[0] = d[1] = 0;
}
