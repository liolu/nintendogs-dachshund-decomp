#include "m2c.h"
s32 func_01ffdb08(s32 arg0);
s32 func_02028120(s32 base);
void func_02008510(s32 arg0, s32 arg1, s32 arg2) {
    u8 *base;
    u8 *obj;

    base = (u8 *) func_01ffdb08(arg0);
    obj = (u8 *) arg2;
    if (base == 0) {
        return;
    }
    if (obj == 0) {
        return;
    }
    switch (arg1) {
    case 0:
        if (obj != 0) {
            M2C_FIELD(obj, s32 *, 0x20) =
                M2C_FIELD(base, s32 *, 0x2DC) +
                M2C_FIELD(M2C_FIELD(M2C_FIELD(obj, void **, 0x18), void **, 0), s32 *, 4);
            M2C_FIELD(obj, s32 *, 0x24) =
                M2C_FIELD(base, s32 *, 0x2E0) +
                M2C_FIELD(M2C_FIELD(M2C_FIELD(obj, void **, 0x18), void **, 0), s32 *, 8);
            M2C_FIELD(obj, s32 *, 0x28) =
                M2C_FIELD(base, s32 *, 0x2E4) +
                M2C_FIELD(M2C_FIELD(M2C_FIELD(obj, void **, 0x18), void **, 0), s32 *, 0xC);
            M2C_FIELD(obj, s32 *, 0x54) = (s16) func_02028120((s32) base);
        }
        break;
    case 1:
        if (obj != 0) {
            M2C_FIELD(obj, s32 *, 0x20) =
                M2C_FIELD(base, s32 *, 0x2C4) +
                M2C_FIELD(M2C_FIELD(M2C_FIELD(obj, void **, 0x18), void **, 0), s32 *, 4);
            M2C_FIELD(obj, s32 *, 0x24) =
                M2C_FIELD(base, s32 *, 0x2C8) +
                M2C_FIELD(M2C_FIELD(M2C_FIELD(obj, void **, 0x18), void **, 0), s32 *, 8);
            M2C_FIELD(obj, s32 *, 0x28) =
                M2C_FIELD(base, s32 *, 0x2CC) +
                M2C_FIELD(M2C_FIELD(M2C_FIELD(obj, void **, 0x18), void **, 0), s32 *, 0xC);
            M2C_FIELD(obj, s32 *, 0x54) = (s16) func_02028120((s32) base);
        }
        break;
    case 2:
        if (obj != 0) {
            M2C_FIELD(obj, s32 *, 0x20) =
                M2C_FIELD(base, s32 *, 0x348) +
                M2C_FIELD(M2C_FIELD(M2C_FIELD(obj, void **, 0x18), void **, 0), s32 *, 4);
            M2C_FIELD(obj, s32 *, 0x24) =
                M2C_FIELD(base, s32 *, 0x34C) +
                M2C_FIELD(M2C_FIELD(M2C_FIELD(obj, void **, 0x18), void **, 0), s32 *, 8);
            M2C_FIELD(obj, s32 *, 0x28) =
                M2C_FIELD(base, s32 *, 0x350) +
                M2C_FIELD(M2C_FIELD(M2C_FIELD(obj, void **, 0x18), void **, 0), s32 *, 0xC);
            M2C_FIELD(obj, s32 *, 0x54) = (s16) func_02028120((s32) base);
        }
        break;
    }
    if (obj == 0) {
        return;
    }
    M2C_FIELD(obj, s32 *, 0x44) =
        (s32) (((s64) func_02028120((s32) base) * 0x11EC + 0x800) >> 12);
}
