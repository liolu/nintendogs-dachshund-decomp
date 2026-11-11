/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02011ca4 from projets/code-lyoko/src/auto/func_02011ca4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
typedef void (*PMCallback)(u32 result, void *arg);
typedef struct {
    BOOL lock;
    PMCallback callback;
    void *callbackArg;
    void *work;
} PMiWork;
extern PMiWork data_0214a714;
void func_02002d18(u32 result) {
    PMCallback callback;
    void *arg;

    callback = data_0214a714.callback;
    arg      = data_0214a714.callbackArg;

    if (data_0214a714.lock) {
        data_0214a714.lock = 0;
    }

    if (callback) {
        data_0214a714.callback = 0;
        (callback)(result, arg);
    }
}
