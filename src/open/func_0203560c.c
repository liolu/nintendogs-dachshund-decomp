#include "m2c.h"
extern u16 *data_0215a04c;
s32 func_0203560c(s32 arg0, s32 arg1) {
    u16 mode;
    s32 t;

    mode = *data_0215a04c;
    if (mode == 1 || mode == 4 || mode == 0x11) {
        return 0;
    }

    if (arg1 == 0) {
        goto Lzero;
    }
    switch (M2C_FIELD(arg1, s16 *, 0x96)) {
    case 0:
    case 1:
    case 2:
    case 0x11:
        t = 1;
        break;
    default:
Lzero:
        t = 0;
        break;
    }
    if (t != 0) {
        return 0;
    }

    if (M2C_FIELD(arg0, u16 *, 0x104) != 0) {
        M2C_FIELD(arg0, u16 *, 0xEA) = 0x263;
        return 1;
    }

    if (M2C_FIELD(arg0, s8 *, 0x8B) == 5) {
        M2C_FIELD(arg0, u16 *, 0xEA) = 0x261;
        return 1;
    }
    if (M2C_FIELD(arg0, s8 *, 0x8B) == 4) {
        M2C_FIELD(arg0, u16 *, 0xEA) = 0x262;
        return 1;
    }
    return 0;
}
