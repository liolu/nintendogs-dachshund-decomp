/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a5d54();                                /* extern */
extern void *data_0214da84;
extern u16 *data_0215a04c;

s32 func_0202a520(void *arg0) {
    s8 temp_r1_2;
    s8 temp_r4;
    u16 temp_r1;

    temp_r1 = *data_0215a04c;
    if ((temp_r1 == 1) || (temp_r1 == 4) || (temp_r1 == 0x11)) {
        return 0;
    }
    temp_r4 = M2C_FIELD(arg0, s8 *, 0x88);
    if (temp_r4 != func_020a5d54()) {
        return 1;
    }
    temp_r1_2 = M2C_FIELD(data_0214da84, s8 *, 7);
    if ((temp_r1_2 != -1) && (temp_r4 != temp_r1_2)) {
        return 1;
    }
    return 0;
}
