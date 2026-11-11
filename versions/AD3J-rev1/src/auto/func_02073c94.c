/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02073194();                                /* extern */
s32 func_02072e68();                                /* extern */
M2C_UNK func_02072e4c(M2C_UNK, s32);                /* extern */
s32 func_02073db4(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_02073b64;

s32 func_02073c94(M2C_UNK arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = func_02072e68();
    if (var_r4 == 0) {
        var_r4 = func_02073db4(arg0, &func_02073b64, func_02073194(), arg0, arg1);
        if (var_r4 != 0) {
            func_02072e4c(arg0, var_r4);
        }
    }
    return var_r4;
}
