/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02063cb0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02063de0(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02063f34(M2C_UNK, M2C_UNK);            /* extern */

s32 func_02064b80(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02063cb0(1, 2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02063f34(2, arg0);
    var_r0 = func_02063de0(2, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
