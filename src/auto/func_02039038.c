/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02039038(void *arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x150);
    if (((s32) temp_r1 >= 0x14) && ((s32) temp_r1 <= 0x16)) {
        M2C_FIELD(arg0, s16 *, 0xE8) = 0x260;
        return 1;
    }
    return 0;
}
