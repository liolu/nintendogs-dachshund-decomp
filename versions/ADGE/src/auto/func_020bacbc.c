#include "engine.h"
#include "m2c.h"

s32 func_020bacbc(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r1 <= 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r1 - 1);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return 1;
}
