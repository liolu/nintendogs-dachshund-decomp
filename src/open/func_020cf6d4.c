#include "m2c.h"
extern void *data_02159e38;
extern u8 *func_020e8384(s32, s32);
s32 func_020cf6d4(void) {
    s32 result = 0;
    s16 i;
    s8 *base;
    s8 *q;
    u8 *v;

    for (i = 0; i < 0xC8; i++) {
        base = (s8 *) M2C_FIELD(data_02159e38, s32 *, 0x141C) + 0x248;
        q = base + i * 4;
        if (q[3] > 0) {
            v = func_020e8384(q[2], *(s16 *) (base + i * 4));
            if (*(s16 *) (v + 4) != 7 && *(u16 *) (v + 0x14) != 0x80) {
                result = 1;
                break;
            }
        }
    }
    return result;
}
