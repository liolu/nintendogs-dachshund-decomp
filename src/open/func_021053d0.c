#include "m2c.h"
#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))
M2C_UNK func_020b1428(void *, M2C_UNK, M2C_UNK, s32, s32);
extern s32 *data_021555f8;

void func_021053d0(void *arg0, M2C_UNK arg1) {
    s32 var_r2;
    s32 temp_r0;
    s32 temp_r1;

    var_r2 = M2C_FIELD(arg0, s32 *, 0xB4);
    if (var_r2 <= 0) {
        var_r2 = 0 - var_r2;
    }
    if (var_r2 < 0xA4) {
        func_020b1428(arg0, arg1, 0xD9D, 0xFB2, 0);
        return;
    }
    func_020b1428(arg0, arg1, 0xD9D, 0xE6A, 0);
    temp_r0 = (M2C_FIELD(data_021555f8, s32 *, 0) * 0x10DCD) + 1;
    M2C_FIELD(data_021555f8, s32 *, 0) = temp_r0;
    temp_r1 = ((s16) (u16) (temp_r0 & 0xFFF) << 1) - 0x1000;
    M2C_FIELD(arg0, s32 *, 0xB0) += FX_Mul(M2C_FIELD(arg0, s32 *, 0xB4), temp_r1);
    temp_r0 = (M2C_FIELD(data_021555f8, s32 *, 0) * 0x10DCD) + 1;
    M2C_FIELD(data_021555f8, s32 *, 0) = temp_r0;
    temp_r1 = ((s16) (u16) (temp_r0 & 0xFFF) << 1) - 0x1000;
    M2C_FIELD(arg0, s32 *, 0xB8) += FX_Mul(M2C_FIELD(arg0, s32 *, 0xB4), temp_r1);
    if (M2C_FIELD(arg0, s32 *, 0xB0) > 0x99C) {
        M2C_FIELD(arg0, s32 *, 0xB0) = 0x99C;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB4) > 0x99C) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0x99C;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB8) > 0x99C) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 0x99C;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) < -0x99C) {
        M2C_FIELD(arg0, s32 *, 0xB0) = -0x99C;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB4) < -0x99C) {
        M2C_FIELD(arg0, s32 *, 0xB4) = -0x99C;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB8) < -0x99C) {
        M2C_FIELD(arg0, s32 *, 0xB8) = -0x99C;
    }
}
