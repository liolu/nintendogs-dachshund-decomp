#include "m2c.h"
void func_02116da0(s32 arg0);
void func_02116dec(s32 arg0, s32 arg1);
void func_02116d20(s32 arg0, s32 arg1);
void func_020e77dc(void);
s32 func_02116cb4(s32 arg0);
void func_02116f14(s32 arg0);
extern void *data_02159e64;
void func_02122a24(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
        if (M2C_FIELD(data_02159e64, s32 *, 0xA4) != 0) {
            func_02116dec(arg0, 0x16);
            func_02116d20(arg0, 0);
            func_020e77dc();
        }
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
