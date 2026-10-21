#include "m2c.h"

s32 func_02028114(s32);
s32 func_0202507c(s32, s32, s32, s32);
void func_0200da50(s32, s32, s32);
extern s32 *data_0214da84;

void func_0200d7d0(s32 p) {
    s32 flag;
    s32 none;
    s32 x;
    s32 y;
    s32 *seed;
    s32 r;
    u16 v;

#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))

    flag = 0;
    if (func_0202507c(p, 0x4D, 0x60, FX_Mul(func_02028114(p), 0x81)) != 0 ||
        func_0202507c(p, 0x74, 0x87, FX_Mul(func_02028114(p), 0x81)) != 0) {
        flag = 1;
    }

    x = 0;
    none = (flag == 0);
    if (none) {
        seed = data_0214da84;
        r = *seed * 0x10DCD + 1;
        *seed = r;
        v = (u16) (((u32) (u16) r * 0xC8) >> 16);
        if (v == 0) {
            x = 1;
        }
    }

    y = 0;
    if (none) {
        seed = data_0214da84;
        r = *seed * 0x10DCD + 1;
        *seed = r;
        v = (u16) (((u32) (u16) r * 0xC8) >> 16);
        if (v == 0) {
            y = 1;
        }
    }
    func_0200da50(p, y, x);
}
