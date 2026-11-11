#include "engine.h"
#include "m2c.h"

s32 func_020072f4(s32 arg0) {
    u32 temp_r0;
    u32 temp_r1;

    if ((u32) M2C_FIELD(arg0, u32 *, 0) >= 0x64U) {
        return 0;
    }
    temp_r1 = M2C_FIELD(arg0, u32 *, 4);
    if ((temp_r1 < 1U) || (temp_r1 > 0xCU)) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 8);
    if ((temp_r0 < 1U) || (temp_r0 > 0x1FU)) {
        return 0;
    }
    return 1;
}
