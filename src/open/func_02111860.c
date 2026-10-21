#include "m2c.h"
extern s8 *data_0215a04c;
void func_02111b88(s8 *, s32);
void func_021118ec(void *);
void func_02111860(s32 arg0, s32 arg1, s32 arg2) {
    s8 *p;
    s16 idx;

    p = data_0215a04c;
    func_02111b88(p, 1);
    *(u16 *) (p + 4) = 1;
    *(u16 *) (p + 6) = 0;
    *(u16 *) (p + 8) = (u16) arg2;
    *(u16 *) (p + 0xE) = (u16) arg1;
    idx = *(s16 *) (p + 0xE);
    M2C_FIELD(p + 0x20 + idx * 0x14, u16 *, 0) |= 1;
    M2C_FIELD(p + 0x20 + idx * 0x14, s16 *, 2) = idx;
    if (arg0 != 0) {
        func_021118ec((void *) arg0);
    }
}
