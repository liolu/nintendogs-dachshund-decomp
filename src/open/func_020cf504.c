#include "m2c.h"
extern void *data_02159e38;
extern s32 func_020a6b10(s16);
s32 func_020cf504(void) {
    s32 result = 0;
    s16 i;
    s8 *base;
    s8 *q;
    s16 v;
    s8 c3;
    s8 c2;

    for (i = 0; i < 0xC8; i++) {
        base = (s8 *) M2C_FIELD(data_02159e38, s32 *, 0x141C) + 0x248;
        q = base + i * 4;
        c3 = q[3];
        v = *(s16 *) (base + i * 4);
        c2 = q[2];
        if (c3 > 0 && c2 == 0) {
            if (func_020a6b10(v) == 5) {
                result = 1;
                break;
            }
        }
    }
    return result;
}
