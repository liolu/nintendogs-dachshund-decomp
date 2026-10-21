#include "m2c.h"
s32 func_02070154(void);
s64 func_0205df50(s32, s32);
s32 func_0206ff7c(s32);
void func_0206cd2c(s32, s32, s32);
void func_0206ed14(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 h;
    s32 hi;
    s32 lo;

    h = func_02070154();
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    hi = (s32) (func_0205df50(arg1, h) >> 32) != 0;
    lo = (s32) func_0205df50(arg1, h);
    lo += hi;
    M2C_FIELD(arg0, s32 *, 4) = lo;
    M2C_FIELD(arg0, s32 *, 0x14) = arg2;
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    func_0206cd2c(arg2, 0, func_0206ff7c(arg1));
}
