#include "m2c.h"
extern u8 *data_02159e38;
void func_0200718c(void *, void *);
s64 func_020cd01c(void *, void *, void *);
s32 func_020ced34(void) {
    s32 result = 0;
    u8 a[0x10];
    u8 b[0x10];
    u8 *base = (u8 *) M2C_FIELD(data_02159e38, void **, 0x141C);
    u8 *p = base + 0x60;

    if (M2C_FIELD(p, u16 *, 0x20) != 0xFFFF) {
        func_0200718c(a, b);
        if (func_020cd01c(p + 0x2C, a, b) >= 0x15180) {
            M2C_FIELD(p, u16 *, 0x1C) = M2C_FIELD(p, u16 *, 0x20);
            M2C_FIELD(p, u16 *, 0x20) = 0xFFFF;
            M2C_FIELD(base, u16 *, 0x6AE) |= 1;
            result = 1;
        }
    }
    return result;
}
