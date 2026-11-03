/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02071f4c(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_020ebcdc(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_020f7170();                                /* extern */

s32 func_020ec0b0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r4;

    var_r4 = -1;
    if (func_020f7170() != -0xB) {
        var_r4 = func_020ebcdc(arg0, 7, arg2);
        if (var_r4 != -1) {
            func_02071f4c(arg0 + 0x18 + (var_r4 * 4), 0, arg1);
        }
    }
    return var_r4;
}
