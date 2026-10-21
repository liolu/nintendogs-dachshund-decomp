#include "m2c.h"
s32 func_02022e04(s32, s32);
void func_02029248(s32);
void func_0200ccc4(s32);
void func_0203e5e8(s32, s32);
s32 func_0200cf10(s8 *arg0) {
    s32 dx1 = M2C_FIELD(arg0, s32 *, 0x26C) - M2C_FIELD(arg0, s32 *, 0x2A0);
    s32 dy1 = M2C_FIELD(arg0, s32 *, 0x274) - M2C_FIELD(arg0, s32 *, 0x2A8);
    s32 dx2 = M2C_FIELD(arg0, s32 *, 0x26C) - M2C_FIELD(arg0, s32 *, 0x2E8);
    s32 dy2 = M2C_FIELD(arg0, s32 *, 0x274) - M2C_FIELD(arg0, s32 *, 0x2F0);
    s32 x = (s32) (((s64) dx1 * dx2 + 0x800) >> 12);
    s32 y = (s32) (((s64) dy1 * dy2 + 0x800) >> 12);

    return (x + y) <= 0;
}
