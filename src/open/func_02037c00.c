#include "m2c.h"
extern u8 data_02135014[];
void func_02037c00(s32 arg0, s32 arg1) {
    s32 v = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 0xC);
    s16 i;
    s8 *p;
    s16 idx;
    s16 x;

    if (v < 0xCCD) {
        idx = 0;
    } else if (v <= 0x119A) {
        idx = 1;
    } else {
        idx = 2;
    }
    p = (s8 *) (data_02135014 + idx * 0xC);
#pragma opt_strength_reduction off
    for (i = 5; i > 0; i--) {
        x = *(s16 *) (p + 0x6C + i * 2);
        if (x >= 0 && x <= arg1) {
            break;
        }
    }
    *(s16 *) (arg0 + 0x148) = i + 0x11;
}
