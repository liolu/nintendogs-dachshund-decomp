#include "m2c.h"
void func_020f45e4(void *, s32);
void func_020f4188(void *, void *, void *, s32);
void func_020f436c(void *, s32);
void func_020f412c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 a[0x10];
    u8 b[0x10];
    u8 c[0x10];

    func_020f45e4(a, arg0);
    func_020f45e4(b, arg1);
    func_020f4188(a, b, c, arg3);
    func_020f436c(c, arg2);
}
