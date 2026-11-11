/* compiler: 2.0/sp1p5 -O2 */
#include "m2c.h"

s16 func_020095a0(s32 arg0, s32 arg1, s32 arg2) {
    s16 var_ip;

    var_ip = 0;
loop_1:
    if ((M2C_FIELD((arg0 + (var_ip * 4)), s32 *, 0x914) != 0) && (arg1 == M2C_FIELD((arg0 + (var_ip * 2)), s16 *, 0x834)) &&
        (arg2 == M2C_FIELD((arg0 + var_ip), s8 *, 0x850))) {
        return var_ip;
    }
    var_ip += 1;
    if ((s32) var_ip >= 7) {
        return -1;
    }
    goto loop_1;
}
