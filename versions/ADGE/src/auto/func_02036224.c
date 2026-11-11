#include "engine.h"
#include "m2c.h"

extern s32 data_0214da84;

s32 func_02036224(s32 arg0) {
    s8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s8 *, 0x89);
    if (((s32) temp_r1 < 0) || ((s32) temp_r1 >= 3)) {
        return 0;
    }
    return M2C_FIELD((data_0214da84 + (temp_r1 * 4)), s32 *, 0x54);
}
