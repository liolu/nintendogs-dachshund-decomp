#include "m2c.h"
extern u8 data_0215449c[];
extern u8 data_0215422c[];
extern void func_02073328(void *, s32, s32);
extern void func_02070e7c(void *, s32, s32);
s32 func_02090578(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *base;
    u8 *base2;
    s16 i;
    s16 j;
    u16 mask;
    u8 *p;

    base = data_0215449c;
    for (i = 0; i < 4; i = (s16) (i + 1)) {
        mask = (u16) (1 << i);
        if ((M2C_FIELD(base, u16 *, 0x1C) & mask) != 0
            && M2C_FIELD(base + i * 2, u16 *, 8) == arg1
            && M2C_FIELD(base + i * 4, s32 *, 0x28) != 0) {
            M2C_FIELD(base, u16 *, 0x1E) |= mask;
            return i;
        }
    }
    base2 = data_0215449c;
    for (j = 0; j < 4; j = (s16) (j + 1)) {
        mask = (u16) (1 << j);
        if ((M2C_FIELD(base2, u16 *, 0x18) & mask) == 0) {
            M2C_FIELD(base2, u16 *, 0x18) |= mask;
            goto found;
        }
    }
    j = -1;
 found:
    if (j != -1) {
        mask = (u16) (1 << j);
        p    = base + 0x28 + j * 4;
        func_02073328(p, arg0, arg1);
        func_02070e7c(p, arg2, arg3);
        M2C_FIELD(base + j * 2, u16 *, 0)     = arg0;
        M2C_FIELD(base + j * 2, u16 *, 8)     = arg1;
        M2C_FIELD(base, u16 *, 0x1C) |= mask;
        M2C_FIELD(base, u16 *, 0x1E) |= mask;
        M2C_FIELD(base + j * 2, u16 *, 0x10) = arg2;
        if (M2C_FIELD(&data_0215422c, s32 *, 0x1C) != 0) {
            func_02070e7c(p, 0, 0);
        }
    }
    return j;
}
