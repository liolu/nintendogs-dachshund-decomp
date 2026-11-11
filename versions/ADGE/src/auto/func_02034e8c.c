/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_02034e8c(s32 arg0) {
    s16 temp_r2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0xEA);
    if (((s32) temp_r2 >= 0x309) && ((s32) temp_r2 <= 0x30E)) {
        if (M2C_FIELD(arg0, u8 *, 0xAA) == 2) {
            var_r0_4 = 1;
        } else {
            var_r0_4 = 0;
        }
        return var_r0_4;
    }
    if (((s32) temp_r2 >= 0x360) && ((s32) temp_r2 <= 0x37B)) {
        if (M2C_FIELD(arg0, u8 *, 0xAA) == 2) {
            var_r0_3 = 1;
        } else {
            var_r0_3 = 0;
        }
        return var_r0_3;
    }
    if (((s32) temp_r2 >= 0x3BA) && ((s32) temp_r2 <= 0x3BF)) {
        if (M2C_FIELD(arg0, u8 *, 0xAA) == 2) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        return var_r0_2;
    }
    if (((s32) temp_r2 >= 0x413) && ((s32) temp_r2 <= 0x41C)) {
        if (M2C_FIELD(arg0, u8 *, 0xAA) == 2) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
