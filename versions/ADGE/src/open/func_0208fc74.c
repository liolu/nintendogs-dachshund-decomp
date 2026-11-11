#include "m2c.h"
extern u8 data_0215449c[];
extern s32 func_0208fb70(void *, s32, s32, s32);
s32 func_0208fc74(s32 arg0, s32 arg1, s32 arg2) {
    u8 *base;
    s16 i;
    u16 mask;

    base = data_0215449c;
    for (i = 0; i < 4; i = (s16) (i + 1)) {
        mask = (u16) (1 << i);
        if ((M2C_FIELD(base, u16 *, 0x18) & mask) == 0) {
            M2C_FIELD(base, u16 *, 0x18) |= mask;
            goto found;
        }
    }
    i = -1;
found:
    if (i != -1) {
        if (func_0208fb70(base + 0x28 + i * 4, arg0, arg1, arg2) != 0) {
            return i;
        }
    }
    return -1;
}
