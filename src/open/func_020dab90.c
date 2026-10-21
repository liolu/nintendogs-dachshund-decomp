#include "m2c.h"
extern void *data_02159e74;
void func_0206cbc4(u16, void *, u32);
void func_020dab90(s32 arg0, s32 arg1, u32 arg2) {
    s32 *p = (s32 *) ((s32) data_02159e74 + 4 + arg1 * 0x1B8);
    s8 *q = (s8 *) p + 0x18;
    s32 size = p[5];
    u32 nib = arg2 & 0xF;
    u16 val = 0;
    s32 i;
    u16 *dst;
    volatile u16 v;

    if (p[1] == 0 || p[2] != 0) {
        return;
    }
    for (i = 0; i < 8; i++) {
        val = val | (nib << (i * 4));
    }
    dst = (u16 *) ((s32) data_02159e74 + 0x2948);
    if (dst != 0) {
        dst += (M2C_FIELD(q, u16 *, 0x24) << 5) / 2;
    }
    v = val;
    func_0206cbc4(v, dst, size);
    M2C_FIELD(q, s32 *, 0x20) = 1;
}
