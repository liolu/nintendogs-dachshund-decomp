#include "m2c.h"
extern void *data_02159e64;
extern void func_02116da0(s32 arg0);
extern void func_021231f4(s32 arg0);
extern s32 func_02116cb4(s32 arg0);
extern void func_02116f14(s32 arg0);
void func_02122f8c(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
        func_021231f4(arg0);
        return;
    case 2:
    case 3:
        break;
    case 4:
        if (M2C_FIELD(data_02159e64, s16 *, 0x6C) != 0) {
            return;
        }
        if (func_02116cb4(arg0) == 0) {
            return;
        }
        func_02116f14(arg0);
        return;
    }
}
