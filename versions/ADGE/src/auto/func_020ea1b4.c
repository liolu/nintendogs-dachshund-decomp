#include "engine.h"
#include "m2c.h"

void func_020ea1b4(s32 arg0, s32 arg1) {
    u16 temp_r2;

    M2C_FIELD(arg0, s16 *, 0)    = (s16) (arg1 + 7);
    temp_r2                      = (u16) arg1;
    M2C_FIELD(arg0, u16 *, 2)    = temp_r2;
    M2C_FIELD(arg0, s16 *, 4)    = (s16) (arg1 + 0x13);
    M2C_FIELD(arg0, s16 *, 6)    = (s16) (arg1 + 0xC);
    M2C_FIELD(arg0, s16 *, 8)    = (s16) (arg1 + 0x23);
    M2C_FIELD(arg0, s16 *, 0xA)  = (s16) (arg1 + 0x1E);
    M2C_FIELD(arg0, s16 *, 0xC)  = (s16) (arg1 + 0x19);
    M2C_FIELD(arg0, s16 *, 0xE)  = (s16) (arg1 + 0x35);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (arg1 + 0x30);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) (arg1 + 0x2B);
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) (arg1 + 0x44);
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) (arg1 + 0x3F);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) (arg1 + 0x3A);
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) (arg1 + 5);
    M2C_FIELD(arg0, u16 *, 0x1C) = temp_r2;
}
