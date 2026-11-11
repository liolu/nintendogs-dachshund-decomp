/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02093754(void *, M2C_UNK, s32, s16);   /* extern */
s32 func_02093bc4(void *, M2C_UNK, s32);            /* extern */
s32 func_020940a0(M2C_UNK, s32 *, M2C_UNK, s16);    /* extern */

s32 func_02094814(void *arg0, M2C_UNK arg1, s32 *arg2, M2C_UNK arg3, s16 arg4) {
    s32 var_r4;

    var_r4 = func_020940a0(arg1, arg2, arg3, arg4);
    if (var_r4 >= 0) {
        if (func_02093bc4(M2C_FIELD(arg0, void **, 0x14), arg1, *arg2) != 1) {
            var_r4 = -4;
        } else {
            func_02093754(M2C_FIELD(arg0, void **, 0x14), arg1, *arg2, arg4);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s16 *, 2) = 0x100;
        }
    }
    return var_r4;
}
