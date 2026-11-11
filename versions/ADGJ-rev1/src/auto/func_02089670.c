/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020896cc(M2C_UNK, s32, s32 *, M2C_UNK);    /* extern */

s32 func_02089670(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    s32 sp0;
    s32 var_r1;
    s32 var_r5;

    var_r1 = arg1;
    var_r5 = 0;
    sp0    = 0;
    if (var_r1 != 0) {
        do {
            var_r1 = func_020896cc(arg0, var_r1, &sp0, arg2);
            if (var_r5 < sp0) {
                var_r5 = sp0;
            }
        } while (var_r1 != 0);
    }
    return var_r5;
}
