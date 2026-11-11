#include "engine.h"
#include "m2c.h"

s32 func_020f5b48(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r3;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r2 > arg1) {
        return 1;
    }
    temp_r3 = 0 - arg1;
    if (temp_r2 < temp_r3) {
        return 1;
    }
    temp_r2_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r2_2 > arg1) {
        return 1;
    }
    if (temp_r2_2 < temp_r3) {
        return 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 > arg1) {
        return 1;
    }
    if (temp_r0 < temp_r3) {
        return 1;
    }
    return 0;
}
