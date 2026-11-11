/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
M2C_UNK func_02027ea8(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_02027f08(s32, s32, s32);               /* extern */

void func_020f25d4(s32 arg0) {
    s16 var_r6;
    s32 temp_r0;

    var_r6 = 0;
    do {
        temp_r0 = func_01ffda04(var_r6);
        if (temp_r0 != 0) {
            if (arg0 == 2) {
                func_02027ea8(temp_r0, arg0, 0x12C);
            } else if (arg0 == 5) {
                func_02027f08(temp_r0, arg0, 0x2710);
            }
        }
        var_r6 += 1;
    } while ((s32) var_r6 < 3);
}
