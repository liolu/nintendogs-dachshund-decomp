#include "m2c.h"

typedef struct {
    s16 x;
    s16 y;
    s16 z;
} VecFx16;

#define FX_Mul(a, b) ((s32) (((s64) (a) * (b) + 0x800) >> 12))

extern VecFx16 data_0213ce48;
void func_02067da4(const VecFx16 *, VecFx16 *);
s32 func_020681a8(VecFx16 *, VecFx16 *);
void func_02085000(s32 arg0) {
    VecFx16 a = data_0213ce48;
    VecFx16 b;
    u32 **pp;
    u32 v;
    s32 type;
    s32 dot;

    pp = *(u32 ***) (arg0 + 0x18);
    v = **pp;
    type = (s32) ((v << 24) >> 30);
    switch (type) {
        case 2:
            b.x = 0x1000;
            b.y = 0;
            b.z = 0;
            break;
        case 1:
            b.x = 0;
            b.y = 0x1000;
            b.z = 0;
            break;
        case 0:
            b.x = 0;
            b.y = 0;
            b.z = 0x1000;
            break;
        default:
            func_02067da4((const VecFx16 *) (arg0 + 0x3c), &b);
            break;
    }
    dot = func_020681a8(&a, &b);
    if (dot == 0x1000 || dot == -0x1000) {
        a.x = 0x1000;
        a.y = 0;
        a.z = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x60) = (s16) (FX_Mul(b.y, a.z) - FX_Mul(b.z, a.y));
    M2C_FIELD(arg0, s16 *, 0x62) = (s16) (FX_Mul(b.z, a.x) - FX_Mul(b.x, a.z));
    M2C_FIELD(arg0, s16 *, 0x64) = (s16) (FX_Mul(b.x, a.y) - FX_Mul(b.y, a.x));
    M2C_FIELD(arg0, s16 *, 0x66) = (s16) (FX_Mul(b.y, M2C_FIELD(arg0, s16 *, 0x64)) - FX_Mul(b.z, M2C_FIELD(arg0, s16 *, 0x62)));
    M2C_FIELD(arg0, s16 *, 0x68) = (s16) (FX_Mul(b.z, M2C_FIELD(arg0, s16 *, 0x60)) - FX_Mul(b.x, M2C_FIELD(arg0, s16 *, 0x64)));
    M2C_FIELD(arg0, s16 *, 0x6A) = (s16) (FX_Mul(b.x, M2C_FIELD(arg0, s16 *, 0x62)) - FX_Mul(b.y, M2C_FIELD(arg0, s16 *, 0x60)));
    func_02067da4((VecFx16 *) (arg0 + 0x60), (VecFx16 *) (arg0 + 0x60));
    func_02067da4((VecFx16 *) (arg0 + 0x66), (VecFx16 *) (arg0 + 0x66));
}
