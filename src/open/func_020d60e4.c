#include "m2c.h"

extern void *data_02159e70;
s32 func_020e7ec4(s32, s32);
s32 func_02073a38(s32, s32 *);

s32 func_020d60e4(s32 arg0, s32 arg1, s32 arg2) {
    u8 *base;
    u8 *p;
    s32 v;
    s32 r;

    base = (u8 *) data_02159e70 + 0x1DEC;
    p = (u8 *) ((u32) base + 0x528);
    p = (u8 *) ((u32) p + 0x24);
    r = func_02073a38(func_020e7ec4(arg0, arg1), &v);
    if (r != 0) {
        *(s32 *) (p + 0x10 + arg2 * 4) = v + 0xC;
    } else {
        *(s32 *) (p + 0x10 + arg2 * 4) = 0;
    }
    *(s32 *) p = 1;
    return 1;
}
