/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
s32 func_0202746c();                                /* extern */

s16 func_02112874(void) {
    s16 var_r4;

    var_r4 = 0;
loop_1:
    if ((func_01ffda04(var_r4) != 0) && (func_0202746c() == 2)) {
        return var_r4;
    }
    var_r4 += 1;
    if ((s32) var_r4 >= 3) {
        return -1;
    }
    goto loop_1;
}
