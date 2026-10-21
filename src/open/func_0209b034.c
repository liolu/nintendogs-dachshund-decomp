#include "m2c.h"
u8 *func_020cf4e4(s16);
s32 func_0209b034(s16 *arg0, s32 arg1) {
    s32 i;
    s32 r4;
    u8 *q;

    switch (arg1) {
    case 2:
        r4 = M2C_FIELD(arg0, s32 *, 0x1C);
        break;
    case 1:
        r4 = M2C_FIELD(arg0, s32 *, 0x18) * M2C_FIELD(arg0, s16 *, 0x16) / 100;
        break;
    case 3:
        r4 = 0;
        i = r4;
        for (; i < 200; i++) {
            q = func_020cf4e4((s16) i);
            if (M2C_FIELD(arg0, s16 *, 0) == M2C_FIELD(q, s8 *, 2) && M2C_FIELD(arg0, s16 *, 2) == M2C_FIELD(q, s16 *, 0)) {
                if (M2C_FIELD(q, s8 *, 3) > 1) {
                    r4 = 1;
                    break;
                }
            }
        }
        if (r4 != 0) {
            r4 = 0;
        } else {
            r4 = M2C_FIELD(arg0, s32 *, 0x18);
        }
        break;
    default:
        r4 = M2C_FIELD(arg0, s32 *, 0x18);
        break;
    }
    return r4 / 10 * 10;
}
