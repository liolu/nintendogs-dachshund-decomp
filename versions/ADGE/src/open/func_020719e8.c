#include "m2c.h"

typedef struct {
    s32 f00;
    s32 f04;
    s32 f08;
    s32 f0c;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
} T;

extern s32 data_0215078c;
extern void func_02071988(s32);
extern void func_0206cbf8(s32, s32, s32);
extern void func_0208022c(s32, s32);
extern s32 func_02071560(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_020719e8(s32 a0, u32 a1, s32 a2, s32 a3, s32 a4) {
    func_02071988(0);
    if (data_0215078c != 0) {
        return 0;
    }
    {
        volatile s32 zero = 0;

        func_0206cbf8(zero, a0, a1);
    }
    func_0208022c(a0, a1);
    return func_02071560(0, a0, a0 + (a1 >> 1), a1 >> 1, a2, 0, 0, 1, a3, a4, 0, 0x7F, 0, 0, 0);
}
