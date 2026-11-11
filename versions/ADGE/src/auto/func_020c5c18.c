#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02158a60;

void func_020c5c18(s32 arg0) {
    s32 temp_r1;

    temp_r1                     = (arg0 * 0xC) + (s32) &data_02158a60;
    M2C_FIELD(temp_r1, u8 *, 8) = (u8) (M2C_FIELD(temp_r1, u8 *, 8) + 1);
}
