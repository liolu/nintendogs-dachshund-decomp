#include "engine.h"
#include "m2c.h"
extern u32 *data_02159e38;
s16 func_020cf600(void) {
    s16 cur;
    s16 best;
    s16 i;
    s32 found;
    s16 x;
    s32 off;
    u32 base;

    best = 0x89;
    cur = M2C_FIELD(M2C_FIELD(data_02159e38, u32 *, 0x141C), s16 *, 0x7E);
    found = 0;
    i = 0;
    off = 0;
    for (; i < 0xC8; i++, off += 4) {
        s8 *p = (s8 *) M2C_FIELD(data_02159e38, u32 *, 0x141C) + 0x248;
        s8 w;
        s8 v;

        x = *(s16 *) (p + off);
        w = p[off + 2];
        v = p[off + 3];
        if (v > 0 && w == 0) {
            if (func_020a6b10(x) == 5) {
                if (best > x) {
                    best = x;
                }
                if (cur == x) {
                    found = 1;
                    break;
                }
            }
        }
    }
    if (found == 0) {
        cur = best;
        base = M2C_FIELD(data_02159e38, u32 *, 0x141C);
        M2C_FIELD(base, s16 *, 0x7E) = best;
        *(u16 *) ((u8 *) base + 0x6AE) |= 1;
    }
    return cur;
}
