#include "m2c.h"

extern void *data_02159e70;
extern void *data_0215a044;

void func_020ddca8(s32);
void func_020ddc98(void);
void func_020eb9fc(s32, s32, s32);
void func_020e3e2c(s32);
void func_020e3df0(void);

void func_020e4008(s32 arg0) {
    s16 v;
    s32 old;
    u16 idx;

    v = M2C_FIELD(M2C_FIELD(data_0215a044, void **, 4), s16 *, 8);
    old = M2C_FIELD(arg0, s32 *, 0);
    idx = (u16) ((v + 0x3B) / 60);
    switch (idx) {
    case 3:
        M2C_FIELD(arg0, s32 *, 0) = 1;
        if (M2C_FIELD(arg0, s32 *, 0) != old) {
            func_020ddca8(3);
        }
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0) = 2;
        if (M2C_FIELD(arg0, s32 *, 0) != old) {
            func_020ddca8(2);
        }
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0) = 3;
        if (M2C_FIELD(arg0, s32 *, 0) != old) {
            func_020ddca8(1);
        }
        break;
    case 0:
        if (M2C_FIELD(arg0, s32 *, 4) >= 0x1E ||
            M2C_FIELD(data_02159e70, s32 *, 0xA8) == 7) {
            M2C_FIELD(arg0, s32 *, 0) = 5;
        } else {
            M2C_FIELD(arg0, s32 *, 4) = M2C_FIELD(arg0, s32 *, 4) + 1;
            M2C_FIELD(arg0, s32 *, 0) = 4;
            if (M2C_FIELD(arg0, s32 *, 0) != old) {
                func_020ddc98();
            }
        }
        break;
    }
    func_020eb9fc(0, 2, M2C_FIELD(arg0, s32 *, 0) == 1);
    func_020eb9fc(0, 1, M2C_FIELD(arg0, s32 *, 0) == 2);
    func_020eb9fc(0, 0, M2C_FIELD(arg0, s32 *, 0) == 3);
    func_020eb9fc(0, 3, M2C_FIELD(arg0, s32 *, 0) == 4);
    func_020eb9fc(0, 4, 0);
    if (M2C_FIELD(arg0, s32 *, 0) != 5) {
        return;
    }
    switch (M2C_FIELD(data_02159e70, s32 *, 0xA8)) {
    case 5:
        func_020e3e2c(2);
        break;
    case 6:
        func_020e3e2c(9);
        break;
    case 7:
        func_020e3e2c(0xB);
        break;
    default:
        func_020e3df0();
        break;
    }
}
