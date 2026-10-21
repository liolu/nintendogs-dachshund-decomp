#include "m2c.h"
s32 func_0205df50(s32 dividend, s32 divisor); /* extern */
s32 func_020a147c(void *arg0, s32 arg1) {
    s32 temp_r11;
    s32 temp_r9;
    s32 temp_r8;
    s32 temp_r7;
    s32 temp_r6;
    s32 temp_r5;
    s32 temp_r4;
    s32 temp_r3;
    s32 temp_r2;
    s32 temp_r0;
    s32 var_r0;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x44) - M2C_FIELD(arg0, s32 *, 0x3C);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r8 = temp_r3 + 2;
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r7 = temp_r2 - temp_r4;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x48);
    var_r0 = temp_r0;
    temp_r9 = 0;
    if (temp_r8 >= 0) {
        temp_r6 = temp_r9;
        temp_r5 = temp_r9;
        do {
            temp_r11 = temp_r4 + func_0205df50(temp_r6 + temp_r7, temp_r8);
            temp_r0 = temp_r4 + func_0205df50(temp_r5, temp_r8);
            if (temp_r0 <= arg1 && arg1 < temp_r11) {
                var_r0 = temp_r9;
                break;
            }
            temp_r9++;
            temp_r6 += temp_r7;
            temp_r5 += temp_r7;
        } while (temp_r9 <= temp_r8);
    }
    return var_r0;
}
