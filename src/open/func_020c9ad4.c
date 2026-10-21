#include "m2c.h"

extern s16 data_02124e68[];
void func_0206823c(void *, void *, void *);
void func_02006a20(void *, void *);
void func_0206810c(void *, void *, void *);
void func_020c9c4c(s32);

void func_020c9ad4(u8 *arg0) {
    s32 i2;
    s32 i3;
    s32 j2;
    s32 j3;
    s32 y;
    s32 v;

    i2 = (M2C_FIELD(arg0, u16 *, 0x80) >> 4) * 2;
    i3 = i2 + 1;
    j2 = (M2C_FIELD(arg0, u16 *, 0x82) >> 4) * 2;
    j3 = j2 + 1;
    v = M2C_FIELD(arg0, s32 *, 0x7C);
    y = (s32) (((s64) v * data_02124e68[i3] + 0x800) >> 12);
    M2C_FIELD(arg0, s32 *, 0x30) =
        M2C_FIELD(arg0, s32 *, 0x3C) + (s32) (((s64) y * data_02124e68[j2] + 0x800) >> 12);
    M2C_FIELD(arg0, s32 *, 0x34) =
        M2C_FIELD(arg0, s32 *, 0x40) + (s32) (((s64) v * data_02124e68[i2] + 0x800) >> 12);
    M2C_FIELD(arg0, s32 *, 0x38) =
        M2C_FIELD(arg0, s32 *, 0x44) + (s32) (((s64) y * data_02124e68[j3] + 0x800) >> 12);
    func_0206823c(arg0 + 0x3C, arg0 + 0x30, arg0 + 0x48);
    func_02006a20(arg0 + 0x48, arg0 + 0x48);
    func_0206810c(arg0 + 0x54, arg0 + 0x48, arg0 + 0x60);
    func_02006a20(arg0 + 0x60, arg0 + 0x60);
    func_020c9c4c((s32) arg0);
}
