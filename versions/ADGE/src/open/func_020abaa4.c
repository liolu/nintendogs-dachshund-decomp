#include "m2c.h"
void func_020abaa4(M2C_UNK arg0, s32 arg1) {
    s16 temp_r2;
    M2C_UNK *temp_r0;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0x94) - 0x38;
    temp_r0 = M2C_FIELD(arg0, M2C_UNK **, 0x214);
    if ((u16) temp_r2 <= 1) {
        M2C_FIELD(temp_r0, s32 *, 0x8) -= arg1 / 20;
    } else {
        M2C_FIELD(temp_r0, s32 *, 0x8) -= arg1 / 30;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x8) < 0) {
        M2C_FIELD(temp_r0, s32 *, 0x8) = 0;
    }
}
