#include "m2c.h"

extern M2C_UNK data_02130da8;

s32 func_020ccdc8(void *arg0) {
    s32 var_r3;

    var_r3 = 0;
    if (((s32) M2C_FIELD(arg0, s16 *, 0xE) <= 0) && (M2C_FIELD(arg0, s32 *, 0x35C) == 0)) {
        var_r3                      = 1;
        M2C_FIELD(arg0, s16 *, 4)   = (s16) M2C_FIELD(&data_02130da8, s16 *, 0x14);
        M2C_FIELD(arg0, s16 *, 0xE) = 0x1E;
        M2C_FIELD(arg0, u16 *, 8)   = (u16) (M2C_FIELD(arg0, u16 *, 8) | 2);
    }
    return var_r3;
}
