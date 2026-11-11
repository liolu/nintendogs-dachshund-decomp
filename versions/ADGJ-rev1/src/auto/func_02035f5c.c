/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_02035f5c(s32 arg0, s32 arg1) {
    s16 var_r3;

    var_r3 = 0;
loop_1:
    if (arg1 == M2C_FIELD((arg0 + (var_r3 * 2)), s16 *, 0x148)) {
        return 0;
    }
    var_r3 += 1;
    if ((s32) var_r3 >= 2) {
        return 1;
    }
    goto loop_1;
}
