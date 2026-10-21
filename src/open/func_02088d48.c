#include "m2c.h"
extern s32 data_021541d4;
void func_02088d48(s32 arg0, s32 arg1) {
    volatile struct S { s32 f0, f4; } sp0;
    s32 sp4;

    sp0.f0 = (s32) &data_021541d4;
    sp4 = *(volatile s32 *) (arg1 + 0x18);
    sp0.f4 = sp4;
    *(volatile s32 *) (arg0 + 0x0) = (s32) &data_021541d4;
    *(volatile s32 *) (arg0 + 0x4) = sp4;
}
