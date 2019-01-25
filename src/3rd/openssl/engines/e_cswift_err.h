
#ifndef HEADER_CSWIFT_ERR_H
# define HEADER_CSWIFT_ERR_H

#ifdef  __cplusplus
extern "C" {
#endif

/* BEGIN ERROR CODES */
/*
 * The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */
static void ERR_load_CSWIFT_strings(void);
static void ERR_unload_CSWIFT_strings(void);
static void ERR_CSWIFT_error(int function, int reason, char *file, int line);
# define CSWIFTerr(f,r) ERR_CSWIFT_error((f),(r),__FILE__,__LINE__)

/* Error codes for the CSWIFT functions. */

/* Function codes. */
# define CSWIFT_F_CSWIFT_CTRL                             100
# define CSWIFT_F_CSWIFT_DSA_SIGN                         101
# define CSWIFT_F_CSWIFT_DSA_VERIFY                       102
# define CSWIFT_F_CSWIFT_FINISH                           103
# define CSWIFT_F_CSWIFT_INIT                             104
# define CSWIFT_F_CSWIFT_MOD_EXP                          105
# define CSWIFT_F_CSWIFT_MOD_EXP_CRT                      106
# define CSWIFT_F_CSWIFT_RAND_BYTES                       108
# define CSWIFT_F_CSWIFT_RSA_MOD_EXP                      107

/* Reason codes. */
# define CSWIFT_R_ALREADY_LOADED                          100
# define CSWIFT_R_BAD_KEY_SIZE                            101
# define CSWIFT_R_BN_CTX_FULL                             102
# define CSWIFT_R_BN_EXPAND_FAIL                          103
# define CSWIFT_R_CTRL_COMMAND_NOT_IMPLEMENTED            104
# define CSWIFT_R_MISSING_KEY_COMPONENTS                  105
# define CSWIFT_R_NOT_LOADED                              106
# define CSWIFT_R_REQUEST_FAILED                          107
# define CSWIFT_R_UNIT_FAILURE                            108

#ifdef  __cplusplus
}
#endif
#endif
