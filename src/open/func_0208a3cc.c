#include "m2c.h"
s32 func_0208a3cc(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 idx;

    idx = func_0208a418(arg0, arg1);
    if (idx != -1) {
        *(s32 *) (arg0 + idx * 4 + 0x2C) = arg2;
        *(u16 *) (arg0 + 0x2A) |= 1 << idx;
    }
    return idx;
}
