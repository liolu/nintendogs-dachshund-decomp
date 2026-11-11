/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202af88(void *arg0) {
    s16 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0xE8);
    if (((s32) temp_r2 >= 0x48E) && ((s32) temp_r2 <= 0x4A2)) {
        return 0;
    }
    if (((s32) temp_r2 >= 0x4B8) && ((s32) temp_r2 <= 0x4BB)) {
        return 0;
    }
    if (((s32) temp_r2 >= 0x4BC) && ((s32) temp_r2 <= 0x4C1)) {
        return 0;
    }
    if (((s32) temp_r2 >= 0x4C3) && ((s32) temp_r2 <= 0x4C5)) {
        return 0;
    }
    if ((temp_r2 == 0x48B) && ((u32) M2C_FIELD(arg0, u16 *, 0x10A) < 0x78U)) {
        return 0;
    }
    return 1;
}
