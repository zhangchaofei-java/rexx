
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "pcre_internal.h"

BOOL
PRIV(xclass)(pcre_uint32 c, const pcre_uchar *data, BOOL utf)
{
pcre_uchar t;
BOOL negated = (*data & XCL_NOT) != 0;

(void)utf;
#ifdef COMPILE_PCRE8
/* In 8 bit mode, this must always be TRUE. Help the compiler to know that. */
utf = TRUE;
#endif

/* Character values < 256 are matched against a bitmap, if one is present. If
not, we still carry on, because there may be ranges that start below 256 in the
additional data. */

if (c < 256)
  {
  if ((*data & XCL_HASPROP) == 0)
    {
    if ((*data & XCL_MAP) == 0) return negated;
    return (((pcre_uint8 *)(data + 1))[c/8] & (1 << (c&7))) != 0;
    }
  if ((*data & XCL_MAP) != 0 &&
    (((pcre_uint8 *)(data + 1))[c/8] & (1 << (c&7))) != 0)
    return !negated; /* char found */
  }

/* First skip the bit map if present. Then match against the list of Unicode
properties or large chars or ranges that end with a large char. We won't ever
encounter XCL_PROP or XCL_NOTPROP when UCP support is not compiled. */

if ((*data++ & XCL_MAP) != 0) data += 32 / sizeof(pcre_uchar);

while ((t = *data++) != XCL_END)
  {
  pcre_uint32 x, y;
  if (t == XCL_SINGLE)
    {
#ifdef SUPPORT_UTF
    if (utf)
      {
      GETCHARINC(x, data); /* macro generates multiple statements */
      }
    else
#endif
      x = *data++;
    if (c == x) return !negated;
    }
  else if (t == XCL_RANGE)
    {
#ifdef SUPPORT_UTF
    if (utf)
      {
      GETCHARINC(x, data); /* macro generates multiple statements */
      GETCHARINC(y, data); /* macro generates multiple statements */
      }
    else
#endif
      {
      x = *data++;
      y = *data++;
      }
    if (c >= x && c <= y) return !negated;
    }

#ifdef SUPPORT_UCP
  else  /* XCL_PROP & XCL_NOTPROP */
    {
    const ucd_record *prop = GET_UCD(c);
    BOOL isprop = t == XCL_PROP;

    switch(*data)
      {
      case PT_ANY:
      if (isprop) return !negated;
      break;

      case PT_LAMP:
      if ((prop->chartype == ucp_Lu || prop->chartype == ucp_Ll ||
           prop->chartype == ucp_Lt) == isprop) return !negated;
      break;

      case PT_GC:
      if ((data[1] == PRIV(ucp_gentype)[prop->chartype]) == isprop)
        return !negated;
      break;

      case PT_PC:
      if ((data[1] == prop->chartype) == isprop) return !negated;
      break;

      case PT_SC:
      if ((data[1] == prop->script) == isprop) return !negated;
      break;

      case PT_ALNUM:
      if ((PRIV(ucp_gentype)[prop->chartype] == ucp_L ||
           PRIV(ucp_gentype)[prop->chartype] == ucp_N) == isprop)
        return !negated;
      break;

      /* Perl space used to exclude VT, but from Perl 5.18 it is included,
      which means that Perl space and POSIX space are now identical. PCRE
      was changed at release 8.34. */

      case PT_SPACE:    /* Perl space */
      case PT_PXSPACE:  /* POSIX space */
      switch(c)
        {
        HSPACE_CASES:
        VSPACE_CASES:
        if (isprop) return !negated;
        break;

        default:
        if ((PRIV(ucp_gentype)[prop->chartype] == ucp_Z) == isprop)
          return !negated;
        break;
        }
      break;

      case PT_WORD:
      if ((PRIV(ucp_gentype)[prop->chartype] == ucp_L ||
           PRIV(ucp_gentype)[prop->chartype] == ucp_N || c == CHAR_UNDERSCORE)
             == isprop)
        return !negated;
      break;

      case PT_UCNC:
      if (c < 0xa0)
        {
        if ((c == CHAR_DOLLAR_SIGN || c == CHAR_COMMERCIAL_AT ||
             c == CHAR_GRAVE_ACCENT) == isprop)
          return !negated;
        }
      else
        {
        if ((c < 0xd800 || c > 0xdfff) == isprop)
          return !negated;
        }
      break;

      /* The following three properties can occur only in an XCLASS, as there
      is no \p or \P coding for them. */

      /* Graphic character. Implement this as not Z (space or separator) and
      not C (other), except for Cf (format) with a few exceptions. This seems
      to be what Perl does. The exceptional characters are:

      U+061C           Arabic Letter Mark
      U+180E           Mongolian Vowel Separator
      U+2066 - U+2069  Various "isolate"s
      */

      case PT_PXGRAPH:
      if ((PRIV(ucp_gentype)[prop->chartype] != ucp_Z &&
            (PRIV(ucp_gentype)[prop->chartype] != ucp_C ||
              (prop->chartype == ucp_Cf &&
                c != 0x061c && c != 0x180e && (c < 0x2066 || c > 0x2069))
         )) == isprop)
        return !negated;
      break;

      /* Printable character: same as graphic, with the addition of Zs, i.e.
      not Zl and not Zp, and U+180E. */

      case PT_PXPRINT:
      if ((prop->chartype != ucp_Zl &&
           prop->chartype != ucp_Zp &&
            (PRIV(ucp_gentype)[prop->chartype] != ucp_C ||
              (prop->chartype == ucp_Cf &&
                c != 0x061c && (c < 0x2066 || c > 0x2069))
         )) == isprop)
        return !negated;
      break;

      /* Punctuation: all Unicode punctuation, plus ASCII characters that
      Unicode treats as symbols rather than punctuation, for Perl
      compatibility (these are $+<=>^`|~). */

      case PT_PXPUNCT:
      if ((PRIV(ucp_gentype)[prop->chartype] == ucp_P ||
            (c < 128 && PRIV(ucp_gentype)[prop->chartype] == ucp_S)) == isprop)
        return !negated;
      break;

      /* This should never occur, but compilers may mutter if there is no
      default. */

      default:
      return FALSE;
      }

    data += 2;
    }
#endif  /* SUPPORT_UCP */
  }

return negated;   /* char did not match */
}

/* End of pcre_xclass.c */
