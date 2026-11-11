#include "m2c.h"

extern u8 data_02131718[];

s32 func_020e2a64(s32);
void func_020afbf4(s32);
s32 func_02085d28(s32);
s32 func_02085d30(s32);
void func_0207ca98(s32, s32, s32, s32);

void func_020ff9cc(s32 arg0) {
    s32 *p;
    s32 v0;
    s32 v5;

    if (func_020e2a64(arg0) == 0) {
        return;
    }
    p = (s32 *) M2C_FIELD(arg0, s32 *, 0x214);
    func_020afbf4(arg0);
    v5 = func_02085d28(M2C_FIELD(p, s32 *, 0x68));
    v0 = func_02085d30(M2C_FIELD(p, s32 *, 0x68));
    func_0207ca98(0x23, 0, v0, v5);
    func_0207ca98(0x1A, 0, M2C_FIELD(p, s32 *, 0x98) + 0xC, 0x400);
    func_0207ca98(0x1B, 0, M2C_FIELD(p, s32 *, 0x9C) + 0xC, 0x400);
    func_0207ca98(0x19, 0, M2C_FIELD(p, s32 *, 0xA0) + 0xC, 0x800);
    func_0207ca98(0x16, 0, M2C_FIELD((s32 *) M2C_FIELD(p, s32 *, 0x8C), s32 *, 0x14), 0x2000);
    func_0207ca98(0x15, 0, M2C_FIELD((s32 *) M2C_FIELD(p, s32 *, 0x90), s32 *, 0x14), 0x4000);
    func_0207ca98(0x1E, 0, M2C_FIELD((s32 *) M2C_FIELD(p, s32 *, 0x88), s32 *, 0xC), 0x1C0);
    func_0207ca98(0x1F, 0, M2C_FIELD((s32 *) M2C_FIELD(p, s32 *, 0x94), s32 *, 0xC), 0x1C0);
    func_0207ca98(0x1F, 0x24, (s32) &data_02131718[M2C_FIELD(p, u8 *, 0x4) * 8], 2);
    func_0207ca98(0x1F, 0x26, (s32) (&data_02131718[M2C_FIELD(p, u8 *, 0x4) * 8] + 2), 2);
    func_0207ca98(0x1F, 0x3C, (s32) (&data_02131718[M2C_FIELD(p, u8 *, 0x4) * 8] + 4), 2);
    func_0207ca98(0x1F, 0x3E, (s32) (&data_02131718[M2C_FIELD(p, u8 *, 0x4) * 8] + 6), 2);
    M2C_FIELD(p, s32 *, 0x154) = 1;
}
