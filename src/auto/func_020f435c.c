/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020f3f28(s32, s32, void *);                /* extern */

s32 func_020f435c(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4  = 0;
    temp_r0 = func_020f3f28(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg1, s32 *, 0x14), arg1 + 8);
    if (temp_r0 > 0) {
        var_r4 = temp_r0;
    }
    return var_r4;
}
