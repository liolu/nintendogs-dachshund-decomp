#include "m2c.h"

s32 func_02026fa8(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xF0);
    if (((s32) temp_r0 >= 0xA) && ((s32) temp_r0 < 0x6F)) {
        return 1;
    }
    return 0;
}
