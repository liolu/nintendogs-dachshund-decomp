#include "m2c.h"
extern void *data_02159e70;
s32 func_02114aec(s32);
void func_02116d20(s32, s32);
s32 func_02116da0(s32);
void func_02116dec(M2C_UNK, M2C_UNK);
void func_02116f14(M2C_UNK);
s32 func_02003a34(void);
void func_02124a14(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        if (M2C_FIELD(data_02159e70, s32 *, 0xB8) != 0x1E) {
            return;
        }
        func_02116da0(arg0);
        return;
    case 1:
        if (func_02114aec(arg0) != 0) {
            return;
        }
        if (M2C_FIELD(data_02159e70, s32 *, 0x1DC4) != -1) {
            return;
        }
        func_02116dec(arg0, 2);
        func_02116d20(arg0, 0);
        return;
    case 2:
    case 3:
        break;
    case 4:
        if (func_02003a34() == 0) {
            return;
        }
        func_02116f14(arg0);
        return;
    }
}
