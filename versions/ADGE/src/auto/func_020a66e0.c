/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020abb3c(M2C_UNK);

extern void *data_021555f8;

s32 func_020a66e0(s32 arg0) {
    s16 temp_r0;
    s32 var_r0;
    s32 var_r9;
    void *var_r8;

    var_r9 = 0;
loop_1:
    if ((var_r9 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= var_r9)) {
        var_r8 = NULL;
    } else {
        var_r8 = M2C_FIELD((data_021555f8 + (var_r9 * 4)), void **, 4);
    }
    if (var_r8 != NULL) {
        temp_r0 = M2C_FIELD(var_r8, s16 *, 0x90);
        if ((temp_r0 == 0) || (temp_r0 == 2)) {
            var_r0 = 1;
        } else if ((M2C_FIELD(var_r8, s16 *, 0x94) == 0x35) && (func_020abb3c((s32) var_r8) == 0)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 0) {
            if (arg0 == M2C_FIELD(var_r8, s16 *, 0x98)) {
                return (s32) var_r8;
            }
            if (arg0 == M2C_FIELD(var_r8, s16 *, 0x9A)) {
                return (s32) var_r8;
            }
            goto block_18;
        }
        goto block_18;
    }
block_18:
    var_r9 = (s32) (s16) (var_r9 + 1);
    if (var_r9 >= 7) {
        return 0;
    }
    goto loop_1;
}
