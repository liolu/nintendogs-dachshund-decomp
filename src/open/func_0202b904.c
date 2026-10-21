#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

extern s8 data_0213b3e7[];

void func_0206823c(s32 *, s32 *, s32 *);
s32 func_02009f28(s32 *, s32 *);

void func_0202b904(u8 *arg0) {
    s32 local[3];
    s16 eq;
    s16 idx;

    *(Vec *) local = *(Vec *) (arg0 + 0x490);
    func_0206823c(local, (s32 *) (arg0 + 0x2a0), local);
    eq = func_02009f28(local, (s32 *) (arg0 + 0x18c)) == 0;
    idx = *(s16 *) (arg0 + 0x152);
    switch (data_0213b3e7[idx * 8]) {
    case 0:
        *(s16 *) (arg0 + 0xea) = 0x40c + eq;
        *(s16 *) (arg0 + 0xfa) = 0;
        return;
    case 1:
    case 2:
    case 3:
        *(s16 *) (arg0 + 0xea) = 0x40e + eq;
        *(s16 *) (arg0 + 0xfa) = 0;
        return;
    default:
        *(s16 *) (arg0 + 0xea) = 0x40b;
        *(s16 *) (arg0 + 0xfa) = 0;
        return;
    }
}
