#include "m2c.h"
void func_02067b94(s32 arg0) {
    volatile u32 *p = (volatile u32 *) 0x4000290;
    volatile u32 *q = (volatile u32 *) 0x4000298;

    *(volatile u16 *) 0x4000280 = 1;
    p[0] = 0;
    p[1] = 0x1000;
    q[0] = arg0;
    q[1] = 0;
}
