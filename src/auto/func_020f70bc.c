/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern s32 data_021473cc;
extern s8 data_0215506c;
extern u8 data_02155070;
extern s8 data_02155074;
extern s32 data_02155094;
extern s32 data_021550c0;

s32 func_020f70bc(void) {
    s32 var_r0;
    s32 var_r0_2;

    if ((data_02155070 == 5) || (data_02155070 == 6) || (data_02155094 != 0)) {
        if ((data_021550c0 != 0) || (data_02155094 != 0)) {
            return -0xA;
        }
        if ((data_02155070 == 6) && ((s32) data_0215506c >= 3) && (data_02155074 == 0)) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 == 0) {
            var_r0 = -8;
        } else {
            var_r0 = -9;
        }
        return var_r0;
    }
    return data_021473cc;
}
