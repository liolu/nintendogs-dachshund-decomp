#include "m2c.h"

extern void *data_0215a080;
extern s8 data_02159e10[];
s32 func_02002e50();
s32 func_02002e48();
s32 func_020038a8();
void func_0211155c();
void func_0211d6b8();
s32 func_020cf6d4();
void func_021114fc();
void func_0211149c();
void func_02002fc0();
s32 func_02002e60();
void func_02111134();
void func_0210e4f0();
void func_02124ad8();

s32 func_02120bc8(s32 arg0) {
    u8 sp0[0x1C];
    u8 sp1C[0x10];
    s32 h;

    func_0211155c(sp1C);
    h = func_020038a8(func_02002e48(func_02002e50()), 0x2610);
    func_0211d6b8(h);
    M2C_FIELD(h, s16 *, 0x260C) = -1;
    ((s16 *) ((s8 *) h + 0x260C))[1] = -1;
    data_0215a080 = (void *) h;
    if (func_020cf6d4() != 0) {
        func_021114fc(*(s16 *) (arg0 + 6));
        func_02002fc0(sp0, &func_0210e4f0);
        func_02002e60(sp0, sp1C);
    }
    if (M2C_FIELD(data_02159e10, s16 *, 2) != 0) {
        func_02002fc0(sp0, &func_02124ad8);
        func_02002e60(sp0, 0);
    }
    func_0211149c(*(s16 *) (arg0 + 6));
    func_02002fc0(sp0, &func_0210e4f0);
    h = func_02002e60(sp0, sp1C);
    if (h == 0xC) {
        func_02111134(*(s16 *) (arg0 + 6), data_0215a080);
        func_02002fc0(sp0, &func_0210e4f0);
        func_02002e60(sp0, sp1C);
    }
    data_0215a080 = 0;
    return h;
}
