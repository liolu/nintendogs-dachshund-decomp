#include "m2c.h"

s32 func_02037e30(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E4), s32 *, 0xC);
    if (temp_r1 < 0xCCD) {
        return 0;
    }
    if (temp_r1 <= 0x119A) {
        return 1;
    }
    return 2;
}
