/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200399c();                                /* extern */

s32 func_02095610(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (func_0200399c() != 0) {
        var_r4                       = 1;
        M2C_FIELD(arg0, s16 *, 0x2E) = 1;
        M2C_FIELD(arg0, s16 *, 0x30) = 0;
    }
    return var_r4;
}
