#include "engine.h"
#include "m2c.h"

extern s32 data_0214da7c;

void func_0200c4d4(s32 arg0) {
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r1;

    data_0214da7c = arg0;
    if (arg0 == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, u32 *, 0x14);
    if ((temp_r1 != 0) && (temp_r1 < 0x80000000U)) {
        M2C_FIELD(arg0, u32 *, 0x14) = (u32) (temp_r1 + arg0);
    }
    temp_r0 = M2C_FIELD(data_0214da7c, u32 *, 0x18);
    if ((temp_r0 != 0) && (temp_r0 < 0x80000000U)) {
        M2C_FIELD(data_0214da7c, u32 *, 0x18) = (u32) (temp_r0 + data_0214da7c);
    }
    temp_r0_2 = M2C_FIELD(data_0214da7c, u32 *, 0x1C);
    if ((temp_r0_2 != 0) && (temp_r0_2 < 0x80000000U)) {
        M2C_FIELD(data_0214da7c, u32 *, 0x1C) = (u32) (temp_r0_2 + data_0214da7c);
    }
    temp_r0_3 = M2C_FIELD(data_0214da7c, u32 *, 0x20);
    if (temp_r0_3 == 0) {
        return;
    }
    if (temp_r0_3 < 0x80000000U) {
        M2C_FIELD(data_0214da7c, u32 *, 0x20) = (u32) (temp_r0_3 + data_0214da7c);
    }
}
