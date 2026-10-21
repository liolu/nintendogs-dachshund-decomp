#include "m2c.h"
#pragma opt_strength_reduction off
s32 func_02036114(s32 arg0, s16 arg1) {
    s16 i;

    for (i = 0; i < 2; i++) {
        if (arg1 == M2C_FIELD(arg0 + i * 2 + 0x100, s16 *, 0x40)) {
            return 0;
        }
    }
    return 1;
}
