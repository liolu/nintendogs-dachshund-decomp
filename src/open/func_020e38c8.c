#include "m2c.h"
extern u8 *data_0215a044;
void func_020ddd58(s32, s32);

void func_020e38c8(s32 arg0) {
    s32 *p = (s32 *) (arg0 + 0x1C48);
    s32 state;

    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x230) == 0 &&
        (s32) M2C_FIELD(M2C_FIELD(data_0215a044, void **, 4), s16 *, 2) <= 0) {
        state = M2C_FIELD(p, s32 *, 0xC);
        if (state == 0xE) {
            return;
        }
        if (state == 0xF) {
            return;
        }
        func_020ddd58(arg0, 0xE);
        return;
    }
    state = M2C_FIELD(p, s32 *, 0xC);
    switch (state) {
    case 9:
        if (M2C_FIELD(M2C_FIELD(data_0215a044, void **, 4), u16 *, 2) != 0) {
            M2C_FIELD(p, s32 *, 0xC) = 0xD;
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x23C) != 0) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x23C) = 1;
        func_020ddd58(arg0, 0xC);
        return;
    case 0xD:
        if (M2C_FIELD(M2C_FIELD(data_0215a044, void **, 4), u16 *, 2) != 0) {
            return;
        }
        func_020ddd58(arg0, 0xE);
        return;
    case 0xC:
        func_020ddd58(arg0, 0xE);
        return;
    case 0xA:
        func_020ddd58(arg0, 0xB);
        return;
    case 0xB:
        M2C_FIELD(p, s32 *, 0xC)     = 0;
        M2C_FIELD(arg0, s32 *, 0x230) = 0;
        return;
    default:
        M2C_FIELD(p, s32 *, 0xC) = 0;
    case 0xE:
        return;
    }
}
