#include "m2c.h"
extern s32 *data_0215467c[];
s32 func_020956d0(u32 arg0, s32 arg1) {
    s32 r = 0;
    s32 *base;
    s32 *p;

    if (arg0 > 2) {
        arg0 = 0;
    }
    base = data_0215467c[arg0];
    p = (s32 *) ((u8 *) base + 0x94 + arg1 * 0x18);
    if (*(s32 *) ((u8 *) base + 0x8C) != -5) {
        r = *(s32 *) ((u8 *) p + 0x10) > 0x6C00;
    }
    return r;
}
