#include "m2c.h"
extern void *data_0214da84;
s32 func_02033bf4(void) {
    s32 var_r3;
    s16 var_r2;
    void *var_r1;
    void *var_r4;
    void *temp_r6;
    s32 var_r6;

    var_r3 = 0;
    var_r1 = data_0214da84;
    var_r2 = 0;
loop_1:
    if ((var_r2 < 0) || (3 <= var_r2)) {
        var_r4 = NULL;
    } else {
        var_r4 = M2C_FIELD((var_r1 + (var_r2 * 4)), void **, 0x54);
    }
    if (var_r4 != NULL) {
        temp_r6 = M2C_FIELD(var_r4, void **, 0x9e8);
        var_r6 = M2C_FIELD(temp_r6, s32 *, 8);
        var_r3 += (s32) ((((s64) var_r6 * 0x1004) + 0x800) >> 12);
    }
    var_r2 = (s16) (var_r2 + 1);
    if (var_r2 < 3) {
        goto loop_1;
    }
    return var_r3 * 2;
}
