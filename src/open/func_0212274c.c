#include "m2c.h"
s32 func_02116da0(s32);
void func_02116f14(s32);
s32 func_02116cb4(s32);
void func_021227f8(s32);
void func_02122d20(s32, s32);
void func_020d2c64(s32, s32, s32, s32, s32);
void func_0212274c(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        if (func_02116da0(arg0) == 0) {
            return;
        }
        M2C_FIELD(arg0, u16 *, 0x2A) = 0;
        func_020d2c64(2, 0xC1F, 0, (s32) func_02122d20, 0);
        return;
    case 1:
        func_021227f8(arg0);
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
