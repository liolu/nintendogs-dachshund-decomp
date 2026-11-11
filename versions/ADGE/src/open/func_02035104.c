#include "m2c.h"
s32 func_02035104(M2C_UNK arg0) {
    s16 temp;
    s32 var_r1;
    s32 var_r0;

    if (M2C_FIELD(arg0, s8 *, 0x8B) != 4) {
        return 0;
    }
    temp = M2C_FIELD(arg0, s16 *, 0xEA);
    if (((s32) temp >= 1) && ((s32) temp <= 0xC)) {
        var_r1 = 1;
    } else {
        var_r1 = (temp == 0x262);
    }
    if (var_r1 != 0) {
        return 1;
    }
    if (((s32) temp >= 0x318) && ((s32) temp <= 0x33B)) {
        var_r0 = M2C_FIELD(arg0, s16 *, 0xEE);
        if (((s32) var_r0 >= 1) && ((s32) var_r0 <= 0xC)) {
            var_r0 = 1;
        } else {
            var_r0 = (var_r0 == 0x262);
        }
        if (var_r0 != 0) {
            return 1;
        }
    }
    return 0;
}
