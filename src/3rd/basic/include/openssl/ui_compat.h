
#ifndef HEADER_UI_COMPAT_H
# define HEADER_UI_COMPAT_H

# include <openssl/opensslconf.h>
# include <openssl/ui.h>

#ifdef  __cplusplus
extern "C" {
#endif

/*
 * The following functions were previously part of the DES section, and are
 * provided here for backward compatibility reasons.
 */

# define des_read_pw_string(b,l,p,v) \
        _ossl_old_des_read_pw_string((b),(l),(p),(v))
# define des_read_pw(b,bf,s,p,v) \
        _ossl_old_des_read_pw((b),(bf),(s),(p),(v))

int _ossl_old_des_read_pw_string(char *buf, int length, const char *prompt,
                                 int verify);
int _ossl_old_des_read_pw(char *buf, char *buff, int size, const char *prompt,
                          int verify);

#ifdef  __cplusplus
}
#endif
#endif
