/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_020c2608();                            /* extern */
extern s32 data_0214b484;

void func_02041fa4(void) {
    s16 var_r5;

    var_r5 = 0;
    do {
        if (M2C_FIELD((data_0214b484 + (var_r5 * 4)), s32 *, 0x44) != 0) {
            func_020c2608();
        }
        var_r5 += 1;
    } while ((s32) var_r5 < 3);
}
