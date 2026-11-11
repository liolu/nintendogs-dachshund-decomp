/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_020c4d64(s32);                         /* extern */
s32 func_020c4da4(M2C_UNK, s32);                    /* extern */
extern void *data_0214b484;

void func_02043498(M2C_UNK arg0) {
    s16 var_r6;
    s32 temp_r0;
    void *temp_r4;
    void *temp_r5;

    var_r6 = 0;
    do {
        temp_r0 = M2C_FIELD((data_0214b484 + (var_r6 * 4)), s32 *, 0x44);
        if (temp_r0 != 0) {
            func_020c4d64(temp_r0 + 0x98);
        }
        var_r6 += 1;
    } while ((s32) var_r6 < 3);
    temp_r5                           = data_0214b484;
    M2C_FIELD(temp_r5, s32 *, 0x7404) = func_020c4da4(arg0, M2C_FIELD(temp_r5, s32 *, 0x7400));
    temp_r4                           = data_0214b484;
    M2C_FIELD(temp_r4, s32 *, 0x7418) = func_020c4da4(arg0, M2C_FIELD(temp_r4, s32 *, 0x7414));
}
