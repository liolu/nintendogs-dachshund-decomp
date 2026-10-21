#include "m2c.h"
void func_02067b30(s32 arg0, s32 arg1) {
    *(volatile u16 *) 0x4000280 = 1;
    *(volatile u32 *) 0x4000290 = 0;
    *(volatile u32 *) 0x4000294 = arg0;
    *(volatile u32 *) 0x4000298 = arg1;
    *(volatile u32 *) 0x400029C = 0;
}
