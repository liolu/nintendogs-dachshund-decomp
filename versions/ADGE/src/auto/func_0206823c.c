#include "engine.h"
#include "m2c.h"

s32 func_0206823c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    M2C_FIELD(arg2, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - M2C_FIELD(arg1, s32 *, 0));
    M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg1, s32 *, 4));
    temp_r0                   = M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg2, s32 *, 8) = temp_r0;
    return temp_r0;
}
