#include "m2c.h"
void func_020c606c(s32 arg0) {
    volatile struct S { s32 f0, f4; } sp0;

    sp0.f0 = 0;
    sp0.f4 = 0;
    *(volatile s32 *) (arg0 + 0x0) = 0;
    *(volatile s32 *) (arg0 + 0x4) = 0;
}
