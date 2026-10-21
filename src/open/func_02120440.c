#include "m2c.h"
s32 func_02116da0(s32);
s32 func_02114aec(void);
void func_02116dec(s32, s32);
void func_02116d20(s32, s32);
s32 func_02116cb4(s32);
void func_02116f14(s32);
extern void *data_02159e70;

void func_02120440(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
        if (func_02114aec() != 0) {
            return;
        }
        switch (M2C_FIELD(data_02159e70, s32 *, 0x1D5C) + 1) {
        case 0:
            func_02116dec(arg0, 0xC);
            func_02116d20(arg0, 0);
            return;
        case 1:
            break;
        case 2:
            func_02116dec(arg0, 0xE);
            func_02116d20(arg0, 0);
            return;
        case 3:
            break;
        case 4:
            func_02116dec(arg0, 0xF);
            func_02116d20(arg0, 0);
            return;
        }
        break;
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
