#include "m2c.h"
void func_0206c338(s32, s32);
void func_0206c2c8(s32, s32, s32, s32);
void func_01ffdc44(s32, s32, s32, s32);
void func_0206cfe0(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    volatile u32 *p;

    func_0206c338(arg0, -1);
    func_0206c2c8(arg0, arg1, arg3, 0x1000000);
    if (arg3 == 0) {
        return;
    }
    p = (volatile u32 *) (0x40000B0 + (arg0 * 3 + 2) * 4);
    while (*p & 0x80000000) {
    }
    func_01ffdc44(arg0, arg1, arg2, 0xAF000001);
}
