/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02139e4c;

void func_0202706c(void *arg0, s16 arg1) {
    s16 temp_ip;
    s16 temp_r3;
    s16 temp_r3_2;
    s32 var_r2;
    s32 var_r2_2;

    temp_ip = M2C_FIELD(arg0, s16 *, 0xF0);
    if (((s32) temp_ip >= 4) && ((s32) temp_ip <= 8)) {
        var_r2 = 1;
    } else if (temp_ip == 0x57) {
        var_r2 = 1;
    } else {
        temp_r3 = M2C_FIELD(arg0, s16 *, 0xEA);
        if (((s32) temp_r3 >= 0xF) && ((s32) temp_r3 <= 0x4B)) {
            var_r2 = 1;
        } else if (((s32) temp_r3 >= 0x119) && ((s32) temp_r3 <= 0x13C)) {
            var_r2 = 1;
        } else {
            var_r2 = 0;
        }
    }
    if (var_r2 != 0) {
        var_r2_2 = 0;
    } else {
        temp_r3_2 = M2C_FIELD(arg0, s16 *, 0xEA);
        if (((s32) temp_r3_2 >= 0x478) && ((s32) temp_r3_2 <= 0x47E)) {
            var_r2_2 = 0;
        } else if (((s32) temp_r3_2 >= 0x4C7) && ((s32) temp_r3_2 <= 0x4CA)) {
            var_r2_2 = 0;
        } else if (temp_ip == 0x53) {
            var_r2_2 = 0;
        } else if (temp_ip == 0x54) {
            var_r2_2 = 0;
        } else {
            var_r2_2 = 1;
        }
    }
    if (var_r2_2 == 0) {
        return;
    }
    if ((u32) * ((u16 *) ((s8 *) &data_02139e4c + (M2C_FIELD(arg0, s16 *, 0xFA) * 2))) <=
        (u32) * ((u16 *) ((s8 *) &data_02139e4c + (arg1 * 2)))) {
        M2C_FIELD(arg0, s16 *, 0xFA) = arg1;
    }
}
