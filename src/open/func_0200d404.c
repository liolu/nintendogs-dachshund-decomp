#include "m2c.h"

void func_020235f4(void *, s32, s32);
void func_02035978(void *, s32);
void func_0203910c(void *);
void func_02037130(void *, s32);
void func_0202c9f0(void *, s32);
extern s32 *data_0214da84;

void func_0200d404(s32 p) {
    s32 *seed;
    s32 r;
    s16 a;
    u16 v;

#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))

    func_020235f4((void *) p, 1, 3);
    func_02035978((void *) p, 1);

    seed = data_0214da84;
    r = *seed * 0x10DCD + 1;
    *seed = r;
    v = (u16) (((u32) (u16) r * 0x1F4) >> 16);
    if (v == 0) {
        seed = data_0214da84;
        r = *seed * 0x10DCD + 1;
        a = (s16) (u16) (r & 0xFFF);
        *seed = r;
        M2C_FIELD(p, s32 *, 0x26C) = FX_Mul(a, 0x14000) - 0xA000;

        seed = data_0214da84;
        r = *seed * 0x10DCD + 1;
        a = (s16) (u16) (r & 0xFFF);
        *seed = r;
        M2C_FIELD(p, s32 *, 0x274) = FX_Mul(a, 0x14000) - 0xA000;
    }

    func_0203910c((void *) p);
    func_02037130((void *) p, 0x302);
    func_0202c9f0((void *) p, 0);
}
