/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02070bb4(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0208b3dc(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_020969e4();                                /* extern */

s32 func_0208b7b0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r4;

    var_r4 = -1;
    if (func_020969e4() != -0xB) {
        var_r4 = func_0208b3dc(arg0, 7, arg2);
        if (var_r4 != -1) {
            func_02070bb4(arg0 + 0x18 + (var_r4 * 4), 0, arg1);
        }
    }
    return var_r4;
}
