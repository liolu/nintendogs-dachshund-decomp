#include "m2c.h"
s32 func_020bb054(s32 *arg0, void *arg1, s32 arg2) {
    typedef struct {
        u32 w[11];
    } Copy11;
    u8 *base;

    base = (u8 *) arg0 + 0x20;
    if (arg0[0] - 1 >= arg2) {
        return 0;
    }
    *(Copy11 *) (base + arg0[0] * 0x2C) = *(Copy11 *) arg1;
    arg0[0]++;
    return 1;
}
