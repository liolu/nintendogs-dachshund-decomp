/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04();                                /* extern */
s32 func_020280e0();                                /* extern */

s32 func_020afc44(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_01ffda04() != 0) {
        var_r4 = func_020280e0();
    }
    return var_r4;
}
