#include "m2c.h"
extern s32 func_020072f4(s32);
extern s32 func_020072c0(s32);
#pragma opt_strength_reduction off
s32 func_020cd6bc(void *arg0) {
    u32 date[4];
    u32 time[3];
    s32 flag;
    s16 i;

    flag = 0;
    for (i = 0; i < 6; i++) {
        if (M2C_FIELD((s8 *) arg0 + i, u8 *, 8) != 0) {
            flag = 1;
            break;
        }
    }
    if (flag != 0) {
        date[0] = M2C_FIELD(arg0, u8 *, 0x13);
        date[1] = M2C_FIELD(arg0, u8 *, 0x12);
        date[2] = M2C_FIELD(arg0, u8 *, 0x11);
        date[3] = 0;
        time[0] = M2C_FIELD(arg0, u8 *, 0x10);
        time[1] = M2C_FIELD(arg0, u8 *, 0xF);
        time[2] = M2C_FIELD(arg0, u8 *, 0xE);
        if (func_020072f4((s32) date) != 0 && func_020072c0((s32) time) != 0) {
            flag = 1;
        } else {
            flag = 0;
        }
    }
    return flag;
}
