#include "m2c.h"

s32 func_020b1db4(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 >= arg1) {
        return 0;
    }
    M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) + (arg1 - temp_r0));
    return 1;
}
