#include "m2c.h"
s32 func_020946d0(s32 arg0, u32 arg1) {
    s32 i;
    s32 base;

    if (arg0 == 0 || M2C_FIELD(arg0, s32 *, 0) == 0) {
        return 0;
    }
    base = M2C_FIELD(arg0, s32 *, 0);
    if (arg1 >= M2C_FIELD(base, u32 *, 0)) {
        return 0;
    }
    base = base + 0x94 + arg1 * 0x18;
    for (i = 0; i < 0x30; i++) {
        ((u16 *) M2C_FIELD(base, s32 *, 0x14))[i + 2] = 0;
        ((u16 *) M2C_FIELD(base, s32 *, 0x14))[i + 0x32] = 0;
    }
    M2C_FIELD(base, s32 *, 4) = 0;
    return 1;
}
