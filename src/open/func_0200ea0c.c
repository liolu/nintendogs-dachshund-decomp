#include "m2c.h"
void func_02035978(void *, s32);
void func_0203910c(void *);
M2C_UNK func_02037130(void *, s32);
M2C_UNK func_02028714(void *, s32, s32);
s32 func_02028114(void *);
void func_0202fa5c(void *);
extern s32 *data_0214da84;
extern M2C_UNK *data_0215a048;
void func_0200ea0c(s32 p) {
    s32 *seed;
    long r;
    s16 a;
    u16 v;
    s32 k;

#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))

    func_02035978((void *) p, 1);

    seed = data_0214da84;
    r = *seed * 0x10DCD + 1;
    v = (u16) (((u32) (u16) r * 0x1F4) >> 16);
    *seed = r;
    if (v == 0) {
        seed = data_0214da84;
        k = (M2C_FIELD(data_0215a048, s32 *, 0xC) * 3) >> 2;
        r = *seed * 0x10DCD + 1;
        a = (s16) (u16) (r & 0xFFF);
        *seed = r;
        M2C_FIELD(p, s32 *, 0x26C) = FX_Mul(a, k) - (k >> 1);

        seed = data_0214da84;
        r = *seed * 0x10DCD + 1;
        a = (s16) (u16) (r & 0xFFF);
        *seed = r;
        M2C_FIELD(p, s32 *, 0x274) = FX_Mul(a, k) - (k >> 1);
    }

    func_0203910c((void *) p);
    r = func_02037130((void *) p, 0x392);
    if (func_02028714((void *) p, 0, 1) != 0) {
        return;
    }
    if ((M2C_FIELD(p, u16 *, 0xFC) >= 0x190) || (r < func_02028114((void *) p))) {
        func_0202fa5c((void *) p);
    }
}
