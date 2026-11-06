/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0210bebc(void *);                          /* extern */
extern void *data_02156080;

void *func_02106a60(s32 arg0) {
    s16 temp_r0;
    s32 var_r0;
    s32 var_r9;
    void *var_r8;

    var_r9 = 0;
loop_1:
    if ((var_r9 < 0) || ((s32) M2C_FIELD(data_02156080, s16 *, 0x20) <= var_r9)) {
        var_r8 = NULL;
    } else {
        var_r8 = M2C_FIELD((data_02156080 + (var_r9 * 4)), void **, 4);
    }
    if (var_r8 != NULL) {
        temp_r0 = M2C_FIELD(var_r8, s16 *, 0x90);
        if ((temp_r0 == 0) || (temp_r0 == 2)) {
            var_r0 = 1;
        } else if ((M2C_FIELD(var_r8, s16 *, 0x94) == 0x35) && (func_0210bebc(var_r8) == 0)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 0) {
            if (arg0 == M2C_FIELD(var_r8, s16 *, 0x98)) {
                return var_r8;
            }
            if (arg0 == M2C_FIELD(var_r8, s16 *, 0x9A)) {
                return var_r8;
            }
            goto block_18;
        }
        goto block_18;
    }
block_18:
    var_r9 = (s32) (s16) (var_r9 + 1);
    if (var_r9 >= 7) {
        return NULL;
    }
    goto loop_1;
}
