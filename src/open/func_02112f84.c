#include "m2c.h"
void *func_020038a8(s32, s32);
s32 func_020034f0(s32, s32);
void func_0206cbc4(u16, void *, s32);
void *func_02112f84(s32 arg0, s32 arg1) {
    u8 *p;
    volatile u16 z1;
    volatile u16 z2;

    p = func_020038a8(arg0, 0x1ac);
    *(s32 *) (p + 0) = arg1;
    *(s16 *) (p + 4) = 0;
    *(s16 *) (p + 6) = 0;
    *(s32 *) (p + 8) = 0;
    *(s32 *) (p + 0xC) = 0;
    *(s32 *) (p + 0x10) = 0;
    *(s32 *) (p + 0x14) = 0;
    *(s32 *) (p + 0x18) = 0;
    *(s32 *) (p + 0x1C) = 0;
    *(s32 *) (p + 0x20) = 0;
    *(s32 *) (p + 0x24) = 0;
    *(s32 *) (p + 0x28) = 0;
    *(s32 *) (p + 0x2C) = func_020034f0(arg0, 0x40000);
    z1 = 0;
    func_0206cbc4(z1, p + 0x30, 0x13C);
    z2 = 0;
    func_0206cbc4(z2, p + 0x16C, 0x40);
    return p;
}
