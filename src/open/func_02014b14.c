#include "m2c.h"
void func_02014b14(s32 arg0, u8 arg1) {
    s8 state = *(s8 *) (arg0 + 0x93);

    if (state == 0) {
        return;
    }
    if (state == 1) {
        return;
    }
    if (state == 0x17) {
        return;
    }
    if (state == 0x18) {
        return;
    }
    switch (arg1) {
    case 0:
        break;
    case 7:
    case 9:
    case 11:
        *(u16 *) (arg0 + 0x12E) = 0xE000;
        break;
    case 8:
    case 10:
    case 12:
        *(u16 *) (arg0 + 0x12E) = 0x2000;
        break;
    case 14:
        break;
    }
}
