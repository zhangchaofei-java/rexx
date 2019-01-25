
#ifndef HEADER_UI_LOCL_H
# define HEADER_UI_LOCL_H

# include <openssl/ui.h>
# include <openssl/crypto.h>

# ifdef _
#  undef _
# endif

struct ui_method_st {
    char *name;
    /*
     * All the functions return 1 or non-NULL for success and 0 or NULL for
     * failure
     */
    /*
     * Open whatever channel for this, be it the console, an X window or
     * whatever. This function should use the ex_data structure to save
     * intermediate data.
     */
    int (*ui_open_session) (UI *ui);
    int (*ui_write_string) (UI *ui, UI_STRING *uis);
    /*
     * Flush the output.  If a GUI dialog box is used, this function can be
     * used to actually display it.
     */
    int (*ui_flush) (UI *ui);
    int (*ui_read_string) (UI *ui, UI_STRING *uis);
    int (*ui_close_session) (UI *ui);
    /*
     * Construct a prompt in a user-defined manner.  object_desc is a textual
     * short description of the object, for example "pass phrase", and
     * object_name is the name of the object (might be a card name or a file
     * name. The returned string shall always be allocated on the heap with
     * OPENSSL_malloc(), and need to be free'd with OPENSSL_free().
     */
    char *(*ui_construct_prompt) (UI *ui, const char *object_desc,
                                  const char *object_name);
};

struct ui_string_st {
    enum UI_string_types type;  /* Input */
    const char *out_string;     /* Input */
    int input_flags;            /* Flags from the user */
    /*
     * The following parameters are completely irrelevant for UIT_INFO, and
     * can therefore be set to 0 or NULL
     */
    char *result_buf;           /* Input and Output: If not NULL,
                                 * user-defined with size in result_maxsize.
                                 * Otherwise, it may be allocated by the UI
                                 * routine, meaning result_minsize is going
                                 * to be overwritten. */
    union {
        struct {
            int result_minsize; /* Input: minimum required size of the
                                 * result. */
            int result_maxsize; /* Input: maximum permitted size of the
                                 * result */
            const char *test_buf; /* Input: test string to verify against */
        } string_data;
        struct {
            const char *action_desc; /* Input */
            const char *ok_chars; /* Input */
            const char *cancel_chars; /* Input */
        } boolean_data;
    } _;

# define OUT_STRING_FREEABLE 0x01
    int flags;                  /* flags for internal use */
};

struct ui_st {
    const UI_METHOD *meth;
    STACK_OF(UI_STRING) *strings; /* We might want to prompt for more than
                                   * one thing at a time, and with different
                                   * echoing status.  */
    void *user_data;
    CRYPTO_EX_DATA ex_data;
# define UI_FLAG_REDOABLE        0x0001
# define UI_FLAG_PRINT_ERRORS    0x0100
    int flags;
};

#endif