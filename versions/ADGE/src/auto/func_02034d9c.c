/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_02034d9c(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0xEA);
    if (((s32) temp_r1 >= 0x413) && ((s32) temp_r1 <= 0x414)) {
        return 1;
    }
    if (((s32) temp_r1 >= 0x416) && ((s32) temp_r1 <= 0x41C)) {
        return 1;
    }
    if (((s32) temp_r1 >= 0x47C) && ((s32) temp_r1 <= 0x47D)) {
        return 1;
    }
    return 0;
}
