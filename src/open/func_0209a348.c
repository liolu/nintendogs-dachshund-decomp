#include "m2c.h"
s32 func_020cf4e4(s32 arg0);
s32 func_0209a348(s16 *arg0) {
    s32 var_r5;
    s32 var_r4;

    var_r4 = 0;
    var_r5 = 0;
    for (; var_r5 < 0xc8; var_r5++) {
        s8 *p = (s8 *) func_020cf4e4((s16) var_r5);

        if (arg0[0] == p[2] && arg0[1] == *(s16 *) p) {
            if (p[3] > 1) {
                var_r4 = 1;
                break;
            }
        }
    }
    return var_r4;
}
