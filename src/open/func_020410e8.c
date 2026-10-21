#include "m2c.h"

extern void *data_0215a04c;

static inline void set_value(s32 arg0, s32 i, s32 x) {
    u16 v = ((u16 *) arg0)[i + 0x9C];
    s16 hi = v + 5000;
    s16 lo = v - 5000;

    if (x > hi) {
        x = hi;
    }
    if (x < lo) {
        x = lo;
    }
    if (x > 10000) {
        x = 10000;
    }
    if (x < 0) {
        x = 0;
    }
    ((u16 *) arg0)[i + 0x99] = x;
}

s32 func_020410e8(s32 arg0) {
    s32 i;
    s32 ret = 1;

    for (i = 0; i < 3; i = (s8) (i + 1)) {
        switch (*(s16 *) ((u8 *) data_0215a04c + (s16) i * 0x14 + 0x30)) {
        case 0:
            set_value(arg0, i, 0);
            ret = 0;
            break;
        case 1:
            set_value(arg0, i, 5000);
            break;
        case 2:
            set_value(arg0, i, 10000);
            ret = 2;
            break;
        default:
            continue;
        }
    }
    return ret;
}
