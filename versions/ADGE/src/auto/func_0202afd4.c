/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_0202afd4(s32 arg0) {
    s16 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0xEA);
    if (((s32) temp_r2 >= 0x48F) && ((s32) temp_r2 <= 0x4A3)) {
        return 0;
    }
    if (((s32) temp_r2 >= 0x4B9) && ((s32) temp_r2 <= 0x4BC)) {
        return 0;
    }
    if (((s32) temp_r2 >= 0x4BD) && ((s32) temp_r2 <= 0x4C2)) {
        return 0;
    }
    if (((s32) temp_r2 >= 0x4C4) && ((s32) temp_r2 <= 0x4C6)) {
        return 0;
    }
    if ((temp_r2 == 0x48C) && ((u32) M2C_FIELD(arg0, u16 *, 0xFC) < 0x78U)) {
        return 0;
    }
    return 1;
}
