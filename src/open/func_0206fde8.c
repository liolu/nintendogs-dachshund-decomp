#include "m2c.h"
extern void func_02097cdc();
extern void func_02070074();
void func_020cbb18(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_02065914(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_0206fde8(s32 arg0, s32 arg1) {
    u8 sp0[0x9C];

    M2C_FIELD(sp0, s16 *, 0x8) = arg0;
    M2C_FIELD(sp0, s32 *, 0x0) = 2;
    M2C_FIELD(sp0, s32 *, 0x10) = arg1;
    func_02070074((s32) sp0);
}
