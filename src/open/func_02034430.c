#include "m2c.h"

typedef struct {
    s32 x[3];
} S12;

s32 func_02009bc0(s32 *arg0, s32 *arg1);
void func_020a5c2c(s32 *arg0);

s32 func_02034430(u8 *arg0, u8 *arg1, s32 arg2) {
    S12 a;
    S12 b;
    s32 r;
    s32 t;
    s32 v;
    s32 d;

    func_020a5c2c(a.x);
    b = *(S12 *) (arg1 + 0xBC);
    r = func_02009bc0(a.x, b.x);
    v = *(s16 *) (*(u8 **) (arg0 + 0x9E8) + 0x2A);
    t = (s32) ((u32) v * 0x52) + 0x3C000;
    if (arg2 != 0)
        t -= 0x32000;
    else
        t += 0x8000;
    d = (s32) (((s64) t * t + 0x800) >> 12);
    if (r > d)
        return 1;
    if (arg2 != 0 && r > 0x2710000)
        return 1;
    return 0;
}
