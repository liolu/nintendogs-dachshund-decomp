#include "m2c.h"
extern s8 *data_02159e38;
extern void func_0206cbdc();
void func_020cf818(s32 arg0, s16 arg1, s32 arg2) {
    s8 *p = data_02159e38 + 0x155C + arg1 * 0x18;
    s32 v = M2C_FIELD(p, s32 *, 0x10) + M2C_FIELD(p, s32 *, 4) * (u16) arg2;

    func_0206cbdc(v + 0x140, arg0, 0x40);
}
