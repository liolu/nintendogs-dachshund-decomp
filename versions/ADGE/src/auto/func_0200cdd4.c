/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08(s16);                             /* extern */
M2C_UNK func_0202706c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02027484(s32, s32);                    /* extern */
s32 func_0203278c(s32, s16);                        /* extern */

void func_0200cdd4(s32 arg0) {
    s16 var_r7;
    s32 temp_r0;

    var_r7 = 0;
    do {
        if (func_0203278c(arg0, var_r7) != 0) {
            temp_r0 = func_01ffdb08(var_r7);
            if (temp_r0 != 0) {
                func_0202706c(temp_r0, 5);
                func_02027484(temp_r0, arg0 + 0x2A0);
            }
        }
        var_r7 += 1;
    } while ((s32) var_r7 < 3);
}
