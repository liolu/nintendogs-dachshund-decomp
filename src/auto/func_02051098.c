#include "m2c.h"

s32 func_02051098(void *arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0xE8);
    if (((s32) temp_r1 >= 0x2A1) && ((s32) temp_r1 <= 0x2B8)) {
        return 1;
    }
    return 0;
}
