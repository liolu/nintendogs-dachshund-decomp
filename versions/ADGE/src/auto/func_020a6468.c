/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_021555f8;

s32 func_020a6468(void) {
    s16 temp_r0;
    s32 var_lr;
    s32 var_r0_2;
    void *var_r0;

    var_lr = 0;
loop_1:
    if ((var_lr < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= var_lr)) {
        var_r0 = NULL;
    } else {
        var_r0 = M2C_FIELD((data_021555f8 + (var_lr * 4)), void **, 4);
    }
    if (var_r0 != NULL) {
        temp_r0 = M2C_FIELD(var_r0, s16 *, 0x90);
        if ((temp_r0 == 3) || (temp_r0 == 6) || (temp_r0 == 8)) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            return 1;
        }
        goto block_13;
    }
block_13:
    var_lr = (s32) (s16) (var_lr + 1);
    if (var_lr >= 7) {
        return 0;
    }
    goto loop_1;
}
