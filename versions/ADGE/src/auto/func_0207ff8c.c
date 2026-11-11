#include "engine.h"
#include "m2c.h"

void func_0207ff8c(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r3 == 0) {
        M2C_FIELD(arg0, s32 *, 0x7C) = arg1;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x7C), s32 *, 0x10) = arg1;
    }
    M2C_FIELD(arg1, s32 *, 0xC)  = temp_r3;
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = arg1;
}
