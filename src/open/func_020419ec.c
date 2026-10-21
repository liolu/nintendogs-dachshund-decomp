#include "m2c.h"
#pragma opt_strength_reduction off
s32 func_020419ec(s32 arg0) {
    s8 i;
    s32 idx;
    s32 max;
    s32 v;

    idx = 0;
    max = 0;
    i = 0;
    for (; i < 5; i++) {
        v = *(s16 *) (arg0 + ((i << 0x10) >> 0xF) + 0x50);
        if (max <= v) {
            max = v;
            idx = i;
        }
    }
    return idx;
}
