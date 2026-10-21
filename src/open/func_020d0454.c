#include "m2c.h"
extern void *data_02159e38;
extern void func_0206cbdc(s32, void *, s32);
void func_020d0454(s32 arg0, s16 arg1) {
    s32 base;
    s32 *p;

    base = arg1 * 0x18 + (s32) data_02159e38;
    p = *(s32 **) (base + 0x1000 + 0x44C);
    func_0206cbdc(arg0, p + 1, 0x85C);
    M2C_FIELD(p, u16 *, 0x8FE) = (u16) (M2C_FIELD(p, u16 *, 0x8FE) | 1);
}
