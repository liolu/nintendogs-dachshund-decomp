/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02034e04();                            /* extern */
extern s32 data_0214b484;

void func_02034da4(void) {
    s32 var_r0;
    s32 var_r6;

    var_r6 = 0;
    do {
        if ((var_r6 < 0) || (var_r6 >= 3)) {
            var_r0 = 0;
        } else {
            var_r0 = M2C_FIELD((data_0214b484 + (var_r6 * 4)), s32 *, 0x50);
        }
        if (var_r0 != 0) {
            func_02034e04();
        }
        var_r6 = (s32) (s8) (var_r6 + 1);
    } while (var_r6 < 3);
}
