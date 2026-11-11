/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_021555f8;

s32 func_020a6518(void) {
    s32 var_r3;
    void *var_r0;

    var_r3 = 0;
loop_1:
    if ((var_r3 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= var_r3)) {
        var_r0 = NULL;
    } else {
        var_r0 = M2C_FIELD((data_021555f8 + (var_r3 * 4)), void **, 4);
    }
    if ((var_r0 != NULL) && ((u32) (u16) (s16) (M2C_FIELD(var_r0, s16 *, 0x90) - 2) <= 1U)) {
        return 1;
    }
    var_r3 = (s32) (s16) (var_r3 + 1);
    if (var_r3 >= 7) {
        return 0;
    }
    goto loop_1;
}
