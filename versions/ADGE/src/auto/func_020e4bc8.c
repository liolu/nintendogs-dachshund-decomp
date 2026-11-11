/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020e4bc8(void *arg0, s32 *arg1, s32 arg2) {
    s32 *var_r1;
    s32 var_r3;
    u16 temp_r0;

    var_r1  = arg1;
    temp_r0 = M2C_FIELD(arg0, u16 *, 6);
    var_r3  = 0;
    if ((s32) temp_r0 <= 0) {
        return;
    }
    do {
        var_r3 += 1;
        *var_r1 = arg2;
        var_r1  = (s32 *) ((s8 *) var_r1 + 0x10);
    } while (var_r3 < (s32) temp_r0);
}
