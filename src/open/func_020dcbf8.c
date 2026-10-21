#define M2C_SELF_func_0206cbc4
#include "m2c.h"
extern void func_0206cbc4(u16, s32, s32);
extern void func_020f0ca4(s32, s32, s32, s32, u16, u16, s32, s16, s16, s16, s16);
void func_020dcbf8(s32 arg0, s32 arg1) {
    volatile u16 zero;
    s32 v;

    zero = 0;
    func_0206cbc4(zero, arg0, 0x22c);
    *(s32 *) (arg0 + 0x0) = arg1;
    v = 1;
    *(s32 *) (arg0 + 0x4) = 1;
    if (((*(u16 *) 0x4000304 & 0x8000) >> 0xf) != 0) {
        v = 0;
    }
    *(s32 *) (arg0 + 0x14) = v;
    *(s32 *) (arg0 + 0x48) = 0;
    *(u16 *) (arg0 + 0x4c) = 0;
    *(s32 *) (arg0 + 0x50) = 0;
    *(s32 *) (arg0 + 0x54) = 0;
    *(s32 *) (arg0 + 0x58) = 0;
    *(s32 *) (arg0 + 0x5c) = 0;
    *(s32 *) (arg0 + 0x60) = 0;
    *(s32 *) (arg0 + 0x64) = 1;
    *(s32 *) (arg0 + 0x68) = 0;
    func_020f0ca4(arg0 + 0x6c, 3, 0x17, 0, 0, 0, 1, 2, 2, 10, 10);
    func_020f0ca4(arg0 + 0xa8, 1, 0x17, 0, 0, 0, 1, 2, 2, 10, 10);
    func_020f0ca4(arg0 + 0xe4, 3, 0x1c, 0, 0, 0, 1, 2, 2, 10, 10);
    func_020f0ca4(arg0 + 0x120, 1, 0x1c, 0, 0, 0, 1, 2, 2, 10, 10);
    func_020f0ca4(arg0 + 0x15c, 1, 0x1e, 0, 0, 0, 1, 2, 2, 10, 10);
}
