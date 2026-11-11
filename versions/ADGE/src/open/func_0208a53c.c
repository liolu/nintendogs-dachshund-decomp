#include "m2c.h"
s32 func_0208a56c(void *arg0, s32 arg1);
extern s32 func_0208a56c(void *, s32);
extern s32 func_0208a56c(void *arg0, s32 arg1);
s32 func_0208a53c(u8 *arg0, s32 arg1, s32 arg2) {
    s32 idx = func_0208a56c(arg0, arg1);

    if (idx != -1) {
        *(s32 *) (arg0 + idx * 4 + 0x38) = arg2;
    }
    return idx;
}
