#include "m2c.h"
extern void *data_02159e70;
void func_02116dec(s32, s32);
void func_02116d20(s32, s32);
void func_02116dd8(s32, s32);
void func_020e2810(void);
s32 func_020b2a08(void);
s32 func_020ee348(void);
void func_02121ea4(s32 arg0) {
    s32 v;

    if (M2C_FIELD(arg0, s16 *, 0x10E) >= 0) {
        func_02116dec(arg0, 0x15);
        func_02116d20(arg0, 2);
        func_020e2810();
        return;
    }
    if (func_020b2a08() != 0) {
        M2C_FIELD(arg0, u16 *, 0x2E) = 3;
        M2C_FIELD(arg0, u16 *, 0x30) = 0;
        return;
    }
    v = M2C_FIELD(data_02159e70, s32 *, 0x48BC);
    if (v == 1) {
        func_02116dec(arg0, 0xA);
        func_02116d20(arg0, 0);
        return;
    }
    if (v == 4) {
        func_02116dec(arg0, 5);
        func_02116d20(arg0, 0);
        return;
    }
    switch (func_020ee348()) {
    case 2:
        func_02116dec(arg0, 4);
        func_02116d20(arg0, 0);
        return;
    case 3:
        func_02116dec(arg0, 9);
        func_02116d20(arg0, 0);
        return;
    case 4:
        func_02116dd8(arg0, 0);
        func_02116d20(arg0, 0);
        return;
    case 5:
        func_02116dd8(arg0, 1);
        func_02116d20(arg0, 0);
        return;
    case 6:
        func_02116dd8(arg0, 2);
        func_02116d20(arg0, 0);
        return;
    }
}
