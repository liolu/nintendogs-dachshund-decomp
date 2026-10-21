#include "m2c.h"
M2C_UNK func_02116cb4(M2C_UNK);
void func_02116da0(M2C_UNK);
void func_02116f14(M2C_UNK);
void func_021231f4(M2C_UNK);
extern void *data_02159e64;
extern void *data_02159e70;
extern void func_02116da0(s32 arg0);
extern void func_021231f4(s32 arg0);
extern s32 func_02116cb4(s32 arg0);
extern void func_02116f14(s32 arg0);
void func_0212300c(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        if (M2C_FIELD(data_02159e70, s32 *, 0xB8) != 0x26) {
            return;
        }
        func_02116da0(arg0);
        return;
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
