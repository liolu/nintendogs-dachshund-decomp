#include "m2c.h"
void func_020c7bb0(M2C_UNK);                        /* extern */
extern s32 data_0214da84;                           /* extern */
void func_020c7bb0(M2C_UNK);
extern s32 data_0214da84;
void func_020422d8(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 0;
    do {
        var_r0 = M2C_FIELD((data_0214da84 + (var_r5 * 4)), s32 *, 0x48);
        if (var_r0 != 0) {
            func_020c7bb0(var_r0);
        }
        var_r5 = (s32) (s16) (var_r5 + 1);
    } while (var_r5 < 3);
}
