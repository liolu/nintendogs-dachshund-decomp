#include "m2c.h"
extern s8 *data_02159e38;
void func_020cdfd4(s16 arg0) {
    volatile u16 var;
    s32 base;
    s32 *p;

    base = arg0 * 0x18 + (s32) data_02159e38;
    p = *(s32 **) (base + 0x1000 + 0x4F4);
    var = 0;
    func_0206cbc4(var, p + 1, 0x85C);
    M2C_FIELD(p, u16 *, 4) = 0xFFFF;
    M2C_FIELD(p, u16 *, 0x8FE) = M2C_FIELD(p, u16 *, 0x8FE) | 1;
}
