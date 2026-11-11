/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02034be0(void *arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0xE8);
    if (((s32) temp_r1 >= 0x412) && ((s32) temp_r1 <= 0x413)) {
        return 1;
    }
    if (((s32) temp_r1 >= 0x415) && ((s32) temp_r1 <= 0x41B)) {
        return 1;
    }
    if (((s32) temp_r1 >= 0x47B) && ((s32) temp_r1 <= 0x47C)) {
        return 1;
    }
    return 0;
}
