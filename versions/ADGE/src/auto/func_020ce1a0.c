#include "m2c.h"

void func_020ce1a0(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s16 var_ip;
    u8 *var_r3;

    var_r3 = arg3;
    var_ip = 0;
loop_1:
    if (*var_r3 != M2C_FIELD((arg0 + var_ip), u8 *, 8)) {
        return;
    }
    var_ip += 1;
    var_r3 += 1;
    if ((s32) var_ip >= 6) {
        return;
    }
    goto loop_1;
}
