#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u16 unk18[0x10];
    s32 unk38;
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
} A0378;

s32 func_020eb9fc(s32, u16, s32);
s32 func_020ebcb4(s32, u16, s32, s32);
s32 func_020ebe24(s32, u16);
s32 func_0205df50(s32, s32);

void func_020a0378(A0378 *arg0) {
    s32 n;
    s32 t48;
    u16 idx;
    s32 b;
    s32 i;
    s32 j;
    s32 m;
    s32 a;
    s32 c;
    s32 v;
    s32 base;

    func_020eb9fc(2, arg0->unk4, 1);
    func_020eb9fc(2, arg0->unk4 + 3, 1);
    func_020eb9fc(2, arg0->unk4 + 2, 0);
    func_020eb9fc(2, arg0->unk4 + 5, 0);
    if (arg0->unk4C == 0) {
        func_020eb9fc(2, arg0->unk4 + 3, 0);
        func_020eb9fc(2, arg0->unk4 + 5, 1);
    } else if (arg0->unk4C == arg0->unk44 - arg0->unk3C + 2) {
        func_020eb9fc(2, arg0->unk4, 0);
        func_020eb9fc(2, arg0->unk4 + 2, 1);
    }
    n = arg0->unk44 - arg0->unk3C + 2;
    t48 = arg0->unk48;
    a = arg0->unkC * (n - t48);
    base = arg0->unk4;
    idx = base + 7;
    b = func_0205df50(a, n);
    c = func_0205df50(arg0->unk10 * t48, n);
    m = b + c;
    m = m - func_020ebe24(2, idx);
    func_020ebcb4(2, idx, 0, m);
    func_020ebcb4(2, base + 8, 0, m);
    v = arg0->unk5C;
    if (v > 5) {
        arg0->unk5C = v - 5;
    } else if (v < -5) {
        arg0->unk5C = v + 5;
    } else {
        arg0->unk5C = 0;
        arg0->unk38 = 0;
    }
    for (i = 0; i < arg0->unk3C; i++) {
        for (j = 0; j < arg0->unk14; j++) {
            func_020ebcb4(2, i + arg0->unk18[j], 0, arg0->unk5C);
        }
    }
}
