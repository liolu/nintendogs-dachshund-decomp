#include "m2c.h"
void func_02068270(s32 arg0, s32 arg1, s32 arg2);
s32 func_0208b948(void *arg0, s32 arg1, s32 arg2);
void func_020f6308(s32 arg0, s32 arg1) {
    s32 ptr;
    s32 b0;
    s32 f24;
    s32 b8;
    s32 sum;
    s32 t;

    ptr = M2C_FIELD(arg0, s32 *, 0x214);
    func_02068270(arg0 + 0xbc, arg1, arg0 + 0xbc);
    M2C_FIELD(arg0, s32 *, 0xb0) = M2C_FIELD(arg0, s32 *, 0xb0) + M2C_FIELD(arg1, s32 *, 0x0);
    M2C_FIELD(arg0, s32 *, 0xb8) = M2C_FIELD(arg0, s32 *, 0xb8) + M2C_FIELD(arg1, s32 *, 0x8);
    b8 = M2C_FIELD(arg0, s32 *, 0xb8);
    f24 = M2C_FIELD(arg0, s32 *, 0x24);
    b0 = M2C_FIELD(arg0, s32 *, 0xb0);
    if (b8 <= 0) {
        b8 = -b8;
    }
    if (b0 <= 0) {
        b0 = -b0;
    }
    sum = b0 + b8;
    t = (s32) (((s64) sum * f24 + 0x800) >> 12);
    if (M2C_FIELD(ptr, s32 *, 0x14) != 0) {
        return;
    }
    func_0208b948((void *) (arg0 + 0x190), 1, (s32) (((s64) t * f24 + 0x800) >> 12));
}
