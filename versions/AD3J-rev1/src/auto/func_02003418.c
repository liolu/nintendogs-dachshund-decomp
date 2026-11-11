#include "m2c.h"

extern M2C_UNK data_027c0000;

void func_02003418(void) {
    M2C_FIELD(&data_027c0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027c0000, s32 *, 0x3FF8) | 1);
}
