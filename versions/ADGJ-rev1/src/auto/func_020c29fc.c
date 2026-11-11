/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207f1c8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020c2558();                                /* extern */
M2C_UNK func_020c2608(s16 *);                       /* extern */
M2C_UNK func_020c26a0(s16 *);                       /* extern */

s32 func_020c29fc(s16 *arg0, s32 arg1, s32 arg2) {
    s32 var_r5;

    var_r5 = 0;
    if (arg1 != 0xFFFF) {
        var_r5 = func_020c2558(arg0, arg1, arg2);
        do {
            func_020c26a0(arg0);
            func_0207f1c8(1, 1);
            func_020c2608(arg0);
        } while (*arg0 != 4);
    }
    return var_r5;
}
