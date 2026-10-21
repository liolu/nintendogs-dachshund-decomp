#include "m2c.h"
void func_0211d778(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0211d94c(s32 arg0, s32 arg1) {
    u16 local[2];
    s8 *p = (s8 *) arg0;
    s8 *q;
    u32 *w;
    u32 *w2;

    local[0] = 0;
    local[1] = 0x5a;
    func_0211d778(arg0, arg1, (M2C_UNK) local, 0x5a);
    q = p + 4;
    w = (u32 *) (q + 0x640);
    w[0] = 0xbeef;
    w[1] = 0xbeef;
    ((volatile u16 *) (q + 0x600))[0x26] = 0x13a;
    if (((volatile u16 *) (q + 0x600))[0x26] > 0xea5f) {
        ((volatile u16 *) (q + 0x600))[0x26] = 0xea5f;
    }
    w2 = (u32 *) (p + 0x2614);
    w2[0] = 0xbeef;
    w2[1] = 0xbeef;
    *(u16 *) (p + 0x74f0) = 2;
}
