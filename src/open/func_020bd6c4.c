#include "m2c.h"

extern u8 *data_02155660;
s32 func_02064584(void *arg0);

s32 func_020bd6c4(u8 arg0) {
    u8 buf[0x7B8];
    u8 *p;

    if (data_02155660 == 0) {
        return arg0;
    }
    if (func_02064584(buf) == 0) {
        arg0 += 2;
    } else {
        arg0 += 1;
    }
    arg0 += 6;
    p = data_02155660;
    if (M2C_FIELD(p, s32 *, 0x40) == 1) {
        if (M2C_FIELD(p, s32 *, 0x20) == 2) {
            arg0 += 1;
        }
    }
    return (u8) (arg0 + 1);
}
