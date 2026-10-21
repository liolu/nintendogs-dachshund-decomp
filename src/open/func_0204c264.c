#include "m2c.h"

s32 func_020361f0(s32);
void func_02027644();
void func_02027658();
s32 func_02028714(s32, s32, s32);
s32 func_020354a8(s32, s32);
s32 func_0203560c(s32, s32);
void func_020358c8(s32);
void func_02037130(s32, s32);
void func_0203910c(s32);
void func_020394dc(s32);

extern u32 *data_0214da84;
void func_0204c264(s32 arg0) {
    u8 sp0[12];
    s32 temp_r0;
    s32 dx;
    s32 dy;
    s32 p;
    s32 q;

    temp_r0 = func_020361f0(arg0);
    if (temp_r0 != 0) {
        func_02027658(temp_r0, sp0);
        func_02027644(temp_r0, (void *) (arg0 + 0x3B4));
        dx = *(s32 *) sp0 - M2C_FIELD(arg0, s32 *, 0x2A0);
        dy = *(s32 *) (sp0 + 8) - M2C_FIELD(arg0, s32 *, 0x2A8);
        p = (s32) (((s64) dx * M2C_FIELD(arg0, s32 *, 0x18C) + (1 << 11)) >> 12);
        q = (s32) (((s64) dy * M2C_FIELD(arg0, s32 *, 0x194) + (1 << 11)) >> 12);
        if (p + q > 0) {
            M2C_FIELD(arg0, s32 *, 0x26C) = M2C_FIELD(arg0, s32 *, 0x2A0) + (dx >> 2) - dy;
            M2C_FIELD(arg0, s32 *, 0x270) = M2C_FIELD(arg0, s32 *, 0x2A4);
            M2C_FIELD(arg0, s32 *, 0x274) = dx + (M2C_FIELD(arg0, s32 *, 0x2A8) + (dy >> 2));
        } else {
            M2C_FIELD(arg0, s32 *, 0x26C) = dy + (M2C_FIELD(arg0, s32 *, 0x2A0) + (dx >> 2));
            M2C_FIELD(arg0, s32 *, 0x270) = M2C_FIELD(arg0, s32 *, 0x2A4);
            M2C_FIELD(arg0, s32 *, 0x274) = (M2C_FIELD(arg0, s32 *, 0x2A8) + (dy >> 2)) - dx;
        }
        func_0203910c(arg0);
        func_02037130(arg0, 0x302);
    }
    func_020358c8(arg0);
    if (func_02028714(arg0, 0, 1) != 0) {
        return;
    }
    if (func_0203560c(arg0, 0) != 0) {
        return;
    }
    if (func_020354a8(arg0, 0) != 0) {
        return;
    }
    if (temp_r0 != 0) {
        if (M2C_FIELD(arg0, u16 *, 0xFC) <= 0x3C) {
            return;
        }
    }
    func_020394dc(arg0);
}
