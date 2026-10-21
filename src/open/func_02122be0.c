#include "m2c.h"
extern void *data_0215a04c;
extern void *data_02159e64;
s32 func_02116da0(s32);
void func_02116dec(s32, s32);
void func_02116d20(s32, s32);
void func_02116f14(s32);
s32 func_02116cb4(s32);
void func_02122d20(s32, s32);
void func_020d2c64(s32, s32, s32, s32, s32);
void func_02122be0(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        if (func_02116da0(arg0) == 0) {
            return;
        }
        if (M2C_FIELD(data_0215a04c, u16 *, 0) == 0x11) {
            func_020d2c64(2, 0xC53, 0, (s32) func_02122d20, 0);
        } else {
            func_020d2c64(2, 0xC1D, 0, (s32) func_02122d20, 0);
        }
        return;
    case 1:
        if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
            return;
        }
        func_02116dec(arg0, 0x16);
        func_02116d20(arg0, 0);
        return;
    case 2:
    case 3:
        break;
    case 4:
        if (func_02116cb4(arg0) == 0) {
            return;
        }
        func_02116f14(arg0);
        return;
    }
}
