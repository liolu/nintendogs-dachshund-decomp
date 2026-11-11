#include "engine.h"
#include "m2c.h"

s32 func_02051444(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0xEA);
    if (((s32) temp_r1 >= 0x2A1) && ((s32) temp_r1 <= 0x2B8)) {
        return 1;
    }
    return 0;
}
