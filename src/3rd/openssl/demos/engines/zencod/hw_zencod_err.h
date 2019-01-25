
#ifndef HEADER_ZENCOD_ERR_H
# define HEADER_ZENCOD_ERR_H

#ifdef  __cplusplus
extern "C" {
#endif

/* BEGIN ERROR CODES */
/*
 * The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */
static void ERR_load_ZENCOD_strings(void);
static void ERR_unload_ZENCOD_strings(void);
static void ERR_ZENCOD_error(int function, int reason, char *file, int line);
# define ZENCODerr(f,r) ERR_ZENCOD_error((f),(r),__FILE__,__LINE__)

/* Error codes for the ZENCOD functions. */

/* Function codes. */
# define ZENCOD_F_ZENCOD_BN_MOD_EXP                       100
# define ZENCOD_F_ZENCOD_CTRL                             101
# define ZENCOD_F_ZENCOD_DH_COMPUTE                       102
# define ZENCOD_F_ZENCOD_DH_GENERATE                      103
# define ZENCOD_F_ZENCOD_DSA_DO_SIGN                      104
# define ZENCOD_F_ZENCOD_DSA_DO_VERIFY                    105
# define ZENCOD_F_ZENCOD_FINISH                           106
# define ZENCOD_F_ZENCOD_INIT                             107
# define ZENCOD_F_ZENCOD_RAND                             108
# define ZENCOD_F_ZENCOD_RSA_MOD_EXP                      109
# define ZENCOD_F_ZENCOD_RSA_MOD_EXP_CRT                  110

/* Reason codes. */
# define ZENCOD_R_ALREADY_LOADED                          100
# define ZENCOD_R_BAD_KEY_COMPONENTS                      101
# define ZENCOD_R_BN_EXPAND_FAIL                          102
# define ZENCOD_R_CTRL_COMMAND_NOT_IMPLEMENTED            103
# define ZENCOD_R_DSO_FAILURE                             104
# define ZENCOD_R_NOT_LOADED                              105
# define ZENCOD_R_REQUEST_FAILED                          106
# define ZENCOD_R_UNIT_FAILURE                            107

#ifdef  __cplusplus
}
#endif
#endif
