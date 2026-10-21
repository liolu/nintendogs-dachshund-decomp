#include "m2c.h"
s32 *func_01ffdb08(s32);
s32 func_02028120(s32);
s32 *func_01ffdb08(s32 arg0);
s32 func_02028120(s32 arg0);
void func_020087e8(s32 arg0) {
    s32 *base;
    s32 *p;

    base = func_01ffdb08(1);
    if (base == 0) {
        return;
    }
    p = (s32 *) ((u8 *) base + 0x378);
    if (arg0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x20) =
            p[0] + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0), s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x24) =
            p[1] + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0), s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0x28) =
            p[2] + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0), s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0x54) = (s16) func_02028120((s32) base);
    }
    if (arg0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x44) =
            (s32) (((s64) func_02028120((s32) base) * 0x1000 + 0x800) >> 12);
    }
    if (arg0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) =
            (s16) (s32) (((s64) func_02028120((s32) base) * 0x7B + 0x800) >> 12);
    }
}
