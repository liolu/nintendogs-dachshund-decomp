#include "m2c.h"
extern s8 *data_0215a04c;
void func_02111b88(s8 *arg0, s32 arg1);
void func_0211149c(s32 arg0) {
    s8 *p;
    s16 idx;

    p = data_0215a04c;
    func_02111b88(p, 7);
    *(u16 *) (p + 4) = 4;
    *(u16 *) (p + 0xE) = (u16) arg0;
    idx = *(s16 *) (p + 0xE);
    M2C_FIELD(p + 0x20 + idx * 0x14, u16 *, 0) |= 1;
    M2C_FIELD(p + 0x20 + idx * 0x14, s16 *, 2) = idx;
}
