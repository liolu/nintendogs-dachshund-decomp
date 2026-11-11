/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020cb2b0(M2C_UNK, s32, s32 *, M2C_UNK, s32, s32); /* extern */

s32 func_020cb244(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 sp8;
    s32 var_r1;
    s32 var_r6;

    var_r1 = arg1;
    var_r6 = 0;
    sp8    = 0;
    if (var_r1 != 0) {
        do {
            var_r1 = func_020cb2b0(arg0, var_r1, &sp8, arg2, arg3, 0);
            if (var_r6 < sp8) {
                var_r6 = sp8;
            }
        } while (var_r1 != 0);
    }
    return var_r6;
}
