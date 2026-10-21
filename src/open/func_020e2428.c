#include "m2c.h"
extern void *data_02159e70;
extern void *data_0215a05c;
void func_020e2428(u16 arg0) {
    s8 *base = (s8 *) data_02159e70;
    s8 *p = base + 0x5028;

    if (M2C_FIELD(base + 0x5000, s32 *, 0x28) != 0) {
        M2C_FIELD(p, u16 *, 0x1E8) = arg0;
        M2C_FIELD(p, u16 *, 0x208) = arg0;
    }
}
