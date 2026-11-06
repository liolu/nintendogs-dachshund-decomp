/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02080f5c();                                /* extern */

void func_020ca750(void *arg0, s16 arg1) {
    s16 var_r5;
    s32 temp_r0;

    var_r5  = arg1;
    temp_r0 = func_02080f5c();
    if (var_r5 == -1) {
        var_r5 = (u16) ((u32) ((u16) ((temp_r0 * 0x10DCD) + 1) * 0x14) >> 0x10) + 0x75;
    }
    M2C_FIELD(arg0, s16 *, 0x70) = var_r5;
}
