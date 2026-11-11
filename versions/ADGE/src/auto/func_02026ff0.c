#include "engine.h"
#include "m2c.h"

extern void *data_021555f8;

s32 func_02026ff0(s32 arg0) {
    s16 temp_r3;
    s32 var_r1;

    temp_r3 = M2C_FIELD(arg0, s16 *, 0x13E) - 3;
    if (((s32) temp_r3 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= (s32) temp_r3)) {
        var_r1 = 0;
    } else {
        var_r1 = M2C_FIELD((data_021555f8 + (temp_r3 * 4)), s32 *, 4);
    }
    if (var_r1 != 0) {
        return 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x94C) != 0) {
        return 1;
    }
    return 0;
}
