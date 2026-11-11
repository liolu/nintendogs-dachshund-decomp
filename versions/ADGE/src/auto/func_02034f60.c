/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02034fc0(M2C_UNK);

extern s32 data_0214da84;

void func_02034f60(void) {
    s32 var_r0;
    s32 var_r6;

    var_r6 = 0;
    do {
        if ((var_r6 < 0) || (var_r6 >= 3)) {
            var_r0 = 0;
        } else {
            var_r0 = M2C_FIELD((data_0214da84 + (var_r6 * 4)), s32 *, 0x54);
        }
        if (var_r0 != 0) {
            func_02034fc0(var_r0);
        }
        var_r6 = (s32) (s8) (var_r6 + 1);
    } while (var_r6 < 3);
}
