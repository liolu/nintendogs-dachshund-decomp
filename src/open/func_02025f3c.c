#include "m2c.h"
void func_02025f3c(s32 arg0) {
    s32 x;
    s32 level;

    x = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x9E8), s32 *, 0xC);
    if (x < 0xCCD)
        level = 0;
    else if (x <= 0x119A)
        level = 1;
    else
        level = 2;
    switch (level) {
    case 0:
        M2C_FIELD(arg0, u32 *, 0x240) = (u32) (((s64) x * 0x174 + 0x800) >> 12);
        break;
    case 1:
        M2C_FIELD(arg0, u32 *, 0x240) = (u32) (((s64) x * 0x108 + 0x800) >> 12);
        break;
    case 2:
        M2C_FIELD(arg0, u32 *, 0x240) = (u32) (((s64) x * 0xC0 + 0x800) >> 12);
        break;
    }
    M2C_FIELD(arg0, u32 *, 0x244) = 0x180;
    M2C_FIELD(arg0, u32 *, 0x24C) = 0x668;
}
