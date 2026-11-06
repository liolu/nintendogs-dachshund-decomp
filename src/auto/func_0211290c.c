/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
s32 func_02033de0();                                /* extern */

s16 func_0211290c(s16 arg0) {
    s16 var_r4;

    var_r4 = arg0;
loop_1:
    var_r4 += 1;
    if ((func_01ffda04(var_r4) != 0) && (func_02033de0() == 0)) {
        return var_r4;
    }
    if ((s32) var_r4 >= 3) {
        return -1;
    }
    goto loop_1;
}
