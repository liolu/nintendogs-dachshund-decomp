#include "m2c.h"

extern u8 *data_0214da84;
s32 func_020a5d54(void);
void func_020a5a1c(s32 a, s32 b);
s32 func_020a5fcc(void);

void func_0202d804(u8 *arg0, s32 arg1) {
    s8 *base;
    s32 ok;
    s8 id;

    id = M2C_FIELD(arg0, s8 *, 0x88);
    ok = 1;
    if (id != func_020a5d54()) {
        if (id != M2C_FIELD(data_0214da84, s8 *, 7)) {
            ok = 0;
        }
    }
    if (!ok) {
        return;
    }
    switch (arg1) {
    default:
        if (id == M2C_FIELD(data_0214da84, s8 *, 7)) {
            func_020a5a1c(3, id);
        } else {
            func_020a5a1c(2, id);
        }
        break;
    case 1:
        func_020a5a1c(6, id);
        break;
    case 2:
        func_020a5a1c(8, id);
        break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        func_020a5a1c(0xC, id);
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
