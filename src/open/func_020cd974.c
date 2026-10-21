#include "m2c.h"
extern s8 *data_02159e38;
extern void func_0206cbc4();
void func_020cd974(s16 arg0) {
    volatile u16 pad;
    s8 *t;

    t = M2C_FIELD(data_02159e38, s8 **, 0x1434);
    pad = 0;
    func_0206cbc4(pad, t + 4 + arg0 * 0xA4, 0xA4);
    M2C_FIELD(t, u16 *, 0x2012) = (u16) (M2C_FIELD(t, u16 *, 0x2012) | 1);
}
