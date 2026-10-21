#include "m2c.h"
s32 *func_01ffdb08(s32 arg0);
s32 func_02028120(s32 arg0);
void func_02008fa4(s32 arg0) {
    s32 *base;
    s32 *p;

    base = func_01ffdb08(1);
    if (base == 0) {
        return;
    }
    p = (s32 *) ((u8 *) base + 0x378);
    if (arg0 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x20) =
        p[0] + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0), s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x24) =
        p[1] + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x28) =
        p[2] + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0), s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x54) = (s16) func_02028120((s32) base);
}
