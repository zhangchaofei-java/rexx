
#ifndef  HEADER_CONF_API_H
# define HEADER_CONF_API_H

# include <openssl/lhash.h>
# include <openssl/conf.h>

#ifdef  __cplusplus
extern "C" {
#endif

/* Up until OpenSSL 0.9.5a, this was new_section */
CONF_VALUE *_CONF_new_section(CONF *conf, const char *section);
/* Up until OpenSSL 0.9.5a, this was get_section */
CONF_VALUE *_CONF_get_section(const CONF *conf, const char *section);
/* Up until OpenSSL 0.9.5a, this was CONF_get_section */
STACK_OF(CONF_VALUE) *_CONF_get_section_values(const CONF *conf,
                                               const char *section);

int _CONF_add_string(CONF *conf, CONF_VALUE *section, CONF_VALUE *value);
char *_CONF_get_string(const CONF *conf, const char *section,
                       const char *name);
long _CONF_get_number(const CONF *conf, const char *section,
                      const char *name);

int _CONF_new_data(CONF *conf);
void _CONF_free_data(CONF *conf);

#ifdef  __cplusplus
}
#endif
#endif
