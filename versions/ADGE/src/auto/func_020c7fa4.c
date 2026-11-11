/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207eb80(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020c7b00();                                /* extern */
M2C_UNK func_020c7bb0(s16 *);                       /* extern */
M2C_UNK func_020c7c48(s16 *);                       /* extern */

s32 func_020c7fa4(s16 *arg0, s32 arg1, s32 arg2) {
    s32 var_r5;

    var_r5 = 0;
    if (arg1 != 0xFFFF) {
        var_r5 = func_020c7b00(arg0, arg1, arg2);
        do {
            func_020c7c48(arg0);
            func_0207eb80(1, 1);
            func_020c7bb0(arg0);
        } while (*arg0 != 4);
    }
    return var_r5;
}
