#include "m2c.h"
extern s32 func_02086410();
extern void func_020861e0();
void func_020863bc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 arg4, s32 arg5) {
    func_020861e0(arg0, arg1, arg2, arg3, (u16) func_02086410(arg0, arg4), arg5);
}
