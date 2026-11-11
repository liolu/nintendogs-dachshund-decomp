/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08();                                /* extern */
s32 func_020280e4();                                /* extern */

s32 func_020e2968(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_01ffdb08() != 0) {
        var_r4 = func_020280e4();
    }
    return var_r4;
}
