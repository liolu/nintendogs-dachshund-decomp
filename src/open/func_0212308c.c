#include "m2c.h"
s32 func_02116da0(s32);
void func_02116f14(s32);
s32 func_02116cb4(s32);
void func_02114c5c(s32);
void func_021231f4(s32);
s32 func_0212472c(u32, s32);
void func_020d2c64(s32, s32, s32, s32, s32);
void func_0212308c(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        if (func_02116da0(arg0) == 0) {
            return;
        }
        func_02114c5c(arg0);
        switch (M2C_FIELD(arg0, s16 *, 0x118)) {
        case 0x13:
            func_020d2c64(2, 0xC4F, 0, (s32) func_0212472c, 0);
            break;
        case 0x14:
            break;
        case 0x15:
            break;
        case 0x16:
            break;
        case 0x17:
            break;
        case 0x18:
            break;
        case 0x19:
            func_020d2c64(2, 0xC55, 0, (s32) func_0212472c, 0);
            break;
        case 0x1A:
            break;
        case 0x1B:
            func_020d2c64(2, 0xC56, 0, (s32) func_0212472c, 0);
            break;
        case 0x1C:
            func_020d2c64(2, 0xC59, 0, (s32) func_0212472c, 0);
            break;
        }
        break;
    case 1:
        func_021231f4(arg0);
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
