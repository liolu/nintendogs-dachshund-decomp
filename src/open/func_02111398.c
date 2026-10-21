#include "m2c.h"
extern void *data_0215a04c;
extern void func_02111b88(void *arg0, s32 arg1);
void func_02111398(s32 arg0, s32 arg1, s32 arg2) {
    s8 *p;
    s16 idx;

    p = data_0215a04c;
    func_02111b88(p, 0x10);
    *(u16 *) (p + 4) = 0;
    *(u16 *) (p + 0xE) = arg1;
    *(u16 *) (p + 0x10) = arg2;
    idx = *(s16 *) (p + 0xE);
    M2C_FIELD(p + 0x20 + idx * 0x14, u16 *, 0) |= 1;
    M2C_FIELD(p + 0x20 + idx * 0x14, s16 *, 2) = idx;
    if (arg0 != 0) {
        *(u32 *) arg0 = 0x42415448;
        *(u16 *) (arg0 + 4) = 0;
    }
}
