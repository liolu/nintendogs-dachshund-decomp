#include "m2c.h"

void func_02026984(u8 *arg0) {
    s32 v;
    s32 sel;

    v = *(s32 *) (*(u8 **) (arg0 + 0x9E8) + 0xC);
    if (v < 0xCCD) {
        sel = 0;
    } else if (v <= 0x119A) {
        sel = 1;
    } else {
        sel = 2;
    }
    switch (sel) {
    case 2:
        *(s32 *) (arg0 + 0x240) = (s32) (((s64) v * 0xCD + 0x800) >> 12);
        *(s32 *) (arg0 + 0x244) = 0x280;
        break;
    case 1:
        *(s32 *) (arg0 + 0x240) = (s32) (((s64) v * 0x118 + 0x800) >> 12);
        *(s32 *) (arg0 + 0x244) = 0x300;
        break;
    case 0:
        *(s32 *) (arg0 + 0x240) = (s32) (((s64) v * 0x1B3 + 0x800) >> 12);
        *(s32 *) (arg0 + 0x244) = 0x380;
        break;
    }
    *(s32 *) (arg0 + 0x24C) = 0xCD0;
}
