#include "m2c.h"

s64 func_020d5068(void);
void func_020412ec(s32, s64);
void func_02041a2c(s32);
extern s32 *data_0214da84;

void func_02040ea8(s32 arg0) {
    s64 v;
    s32 *seed;
    s32 r;
    s32 var_r1;
    s16 a;

#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))

    v = func_020d5068();
    func_020412ec(arg0, v);

    seed = data_0214da84;
    r = *seed * 0x10DCD + 1;
    *seed = r;
    a = (s16) (u16) (r & 0xFFF);
    M2C_FIELD(arg0, s32 *, 0x2A0) = FX_Mul(a, 0x14000) - 0xA000;
    M2C_FIELD(arg0, s32 *, 0x2A4) = 0;

    seed = data_0214da84;
    r = *seed * 0x10DCD + 1;
    *seed = r;
    a = (s16) (u16) (r & 0xFFF);
    M2C_FIELD(arg0, s32 *, 0x2A8) = FX_Mul(a, 0x14000) - 0xA000;

    func_02041a2c(arg0);

    switch (M2C_FIELD(arg0, s8 *, 0x8B)) {
    case 0:
    case 1:
    case 2:
    case 3:
        M2C_FIELD(arg0, s16 *, 0xEA) = 0x257;
        break;
    case 4:
        M2C_FIELD(arg0, s16 *, 0xEA) = M2C_FIELD(arg0, s8 *, 0x88) + 4;
        break;
    case 5:
        seed = data_0214da84;
        r = *seed * 0x10DCD + 1;
        *seed = r;
        var_r1 = M2C_FIELD(arg0, s8 *, 0x88);
        M2C_FIELD(arg0, s16 *, 0xEA) = (var_r1 << 1) + 7 + (u16) (((u32) r << 16) >> 31);
        break;
    }
}
