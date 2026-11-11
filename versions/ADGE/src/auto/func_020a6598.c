/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a73dc(M2C_UNK);

extern void *data_021555f8;

s32 func_020a6598(void) {
    s32 var_r0;
    s32 var_r6;

    var_r6 = 0;
loop_1:
    if ((var_r6 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= var_r6)) {
        var_r0 = 0;
    } else {
        var_r0 = M2C_FIELD((data_021555f8 + (var_r6 * 4)), s32 *, 4);
    }
    if ((var_r0 != 0) && (func_020a73dc(var_r0) == 0)) {
        return 1;
    }
    var_r6 = (s32) (s16) (var_r6 + 1);
    if (var_r6 >= 7) {
        return 0;
    }
    goto loop_1;
}
