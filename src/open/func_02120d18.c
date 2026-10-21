#include "m2c.h"

extern void *data_0215a080;
void func_0206cbdc(s32 arg0, s32 arg1, s32 arg2);

void func_02120d18(s32 arg0, u16 *arg1) {
    u32 base;
    u16 v0;
    u16 v1;

    func_0206cbdc(arg0, (s32) data_0215a080, 0x260C);
    base = (u32) data_0215a080;
    v0 = *(volatile u16 *) &arg1[0];
    v1 = arg1[1];
    *(u16 *) (base + 0x260C) = v0;
    *(u16 *) (base + 0x260E) = v1;
}
