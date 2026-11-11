/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209fe74(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r3;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x38);
    var_r3  = -1;
    if ((temp_r2 == 0) || (temp_r2 == 4)) {
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x48) + arg1;
        if (temp_r1 < (s32) M2C_FIELD(arg0, s32 *, 0x44)) {
            var_r3 = temp_r1;
        }
    }
    return var_r3;
}
