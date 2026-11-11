/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02071ac8(M2C_UNK, s32);                /* extern */
s32 func_02071ae4();                                /* extern */
s32 func_02071e10();                                /* extern */
s32 func_02072b1c(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_020726e0;

s32 func_0207292c(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_02071ae4();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_02071e10();
        }
        var_r4 = func_02072b1c(arg0, &func_020726e0, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_02071ac8(arg0, var_r4);
        }
    }
    return var_r4;
}
