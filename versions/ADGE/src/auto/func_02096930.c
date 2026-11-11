/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_0213d178;
extern s8 data_021545e4;
extern u8 data_021545e8;
extern s8 data_021545ec;
extern s32 data_0215460c;
extern s32 data_02154638;

s32 func_02096930(void) {
    s32 var_r0;
    s32 var_r0_2;

    if ((data_021545e8 == 5) || (data_021545e8 == 6) || (data_0215460c != 0)) {
        if ((data_02154638 != 0) || (data_0215460c != 0)) {
            return -0xA;
        }
        if ((data_021545e8 == 6) && ((s32) data_021545e4 >= 3) && (data_021545ec == 0)) {
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
    return data_0213d178;
}
