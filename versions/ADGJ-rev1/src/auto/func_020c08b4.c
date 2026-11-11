/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c9114();                                /* extern */

void func_020c08b4(void *arg0) {
    s16 var_r0;
    s32 temp_r0;

    temp_r0 = func_020c9114();
    if (temp_r0 < 0x3E8) {
        var_r0 = 0;
    } else if (temp_r0 < 0x1388) {
        var_r0 = 1;
    } else if (temp_r0 < 0x3A98) {
        var_r0 = 2;
    } else if (temp_r0 < 0xC350) {
        var_r0 = 3;
    } else {
        var_r0 = 4;
    }
    M2C_FIELD(arg0, s16 *, 2) = var_r0;
}
