#include "m2c.h"
extern u8 *data_0214da84;
s32 func_020a5d54(void);
void func_020a5a1c(s32 a, s32 b);
s32 func_020a5fcc(void);
void func_0202d6e0(s32 arg0, s32 arg1) {
    s8 *base;
    s32 ok;
    s8 type;

    type = M2C_FIELD(arg0, s8 *, 0x88);
    ok = 1;
    if (type != func_020a5d54()) {
        if (type != M2C_FIELD(data_0214da84, s8 *, 7)) {
            ok = 0;
        }
    }
    if (!ok) {
        return;
    }
    switch (arg1) {
    case 0:
    case 3:
    default:
        func_020a5a1c(5, type);
        break;
    case 1:
        if (M2C_FIELD(arg0, u16 *, 0xF2) == 0x1C) {
            func_020a5a1c(0xB, type);
        } else {
            func_020a5a1c(7, type);
        }
        break;
    case 2:
        func_020a5a1c(9, type);
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        func_020a5a1c(0xD, type);
        break;
    }
    if (M2C_FIELD(arg0, s8 *, 0x88) == M2C_FIELD(data_0214da84, s8 *, 7)) {
        base = (s8 *) func_020a5fcc() + 0x88;
        *(s32 *) (base + 0x6C) = 1;
    } else {
        base = (s8 *) func_020a5fcc() + 0x88;
        *(s32 *) (base + 0x6C) = 0;
    }
}
