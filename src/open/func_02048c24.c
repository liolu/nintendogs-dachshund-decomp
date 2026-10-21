#include "m2c.h"
void func_02048fe4(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_02028120(s32 arg0);
void func_0203e5e8(s32 arg0, s32 arg1);
void func_02048c24(s32 arg0) {
    s32 var;

    var = 0;
    if (((s32 (*)(s32, s32 *, s32, s32, s32, s32)) func_02048fe4)(arg0, &var, 0, 0xB7, 0xBA, 0x29C) != 0) {
        return;
    }
    if (var < (s32) (((s64) func_02028120(arg0) * 0x300C + 0x800) >> 12)) {
        func_0203e5e8(arg0, 0x297);
    }
}
