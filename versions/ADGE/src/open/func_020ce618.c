#include "m2c.h"
extern void *data_02159e38;
#pragma opt_propagation off
void func_020ce618(void) {
    u8 sp0[0x10];
    u8 sp1[0x10];
    s32 p = *(s32 *) ((s32) data_02159e38 + 0x141C);
    s32 q = p + 0x60;

    func_0200718c(sp0, sp1, p);
    func_020cd01c(q, sp0, sp1);
}
