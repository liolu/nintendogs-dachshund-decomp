#include "m2c.h"
extern u8 data_02135014[];
extern s8 *data_0215a064;
void func_02022900(M2C_UNK, s32 *);
void func_020384a0(s32 arg0, s32 arg1) {
    s32 v = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 0xC);
    s16 idx;
    s8 *p;
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
    for (arg0 = 5; arg0 > 0; arg0 = (s16) (arg0 - 1)) {
        x = *(s16 *) (p + 0x6C + arg0 * 2);
        if (x >= 0 && x <= arg1) {
            return;
        }
    }
}
