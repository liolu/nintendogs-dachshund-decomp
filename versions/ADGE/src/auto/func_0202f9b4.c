/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_0214da84;

s32 func_0202f9b4(s32 arg0) {
    s32 var_ip;
    s32 var_r0;

    var_ip = 0;
loop_1:
    if (var_ip != M2C_FIELD(arg0, s8 *, 0x88)) {
        if ((var_ip < 0) || (var_ip >= 3)) {
            var_r0 = 0;
        } else {
            var_r0 = M2C_FIELD((data_0214da84 + (var_ip * 4)), s32 *, 0x54);
        }
        if (var_r0 != 0) {
            return var_r0;
        }
        goto block_8;
    }
block_8:
    var_ip = (s32) (s16) (var_ip + 1);
    if (var_ip >= 3) {
        return 0;
    }
    goto loop_1;
}
