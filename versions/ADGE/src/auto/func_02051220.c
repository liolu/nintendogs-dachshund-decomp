/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02035424(void *, M2C_UNK);                 /* extern */
s32 func_02035450(void *, M2C_UNK);                 /* extern */

s16 func_02051220(void *arg0) {
    s16 temp_r0;
    s16 var_r0;
    s32 var_r0_2;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xEA);
    if (((s32) temp_r0 >= 0x2A1) && ((s32) temp_r0 <= 0x2AC)) {
        return 1;
    }
    if ((s32) (s8) M2C_FIELD(arg0, s32 *, 0x484) >= 1) {
        return 4;
    }
    if ((u32) (u16) (s16) (temp_r0 - 0x2B1) <= 1U) {
        if ((func_02035450(arg0, 0x10) != 0) && (func_02035424(arg0, 0x36) != 0)) {
            return 3;
        }
        return 1;
    }
    if ((u32) (u16) (s16) (temp_r0 + 0xFFFFFD45) <= 1U) {
        if ((func_02035450(arg0, 0xC) != 0) && (func_02035424(arg0, 0x3A) != 0)) {
            return 3;
        }
        return 1;
    }
    if ((temp_r0 == 0x2C4) || (temp_r0 == 0x2C9)) {
        if ((func_02035450(arg0, 8) != 0) && (func_02035424(arg0, 0x30) != 0)) {
            return 3;
        }
        return 1;
    }
    if ((u32) (u16) (s16) (temp_r0 - 0x2BD) <= 1U) {
        return 1;
    }
    if ((temp_r0 == 0x2BA) || (temp_r0 == 0x2C3) || (temp_r0 == 0x2C8)) {
        return 1;
    }
    if ((temp_r0 == 0x2AB) || (temp_r0 == 0x2B5) || (temp_r0 == 0x2BF)) {
        var_r0_2 = 0;
    } else if (((s32) temp_r0 >= 0x2A1) && ((s32) temp_r0 <= 0x2CC)) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
