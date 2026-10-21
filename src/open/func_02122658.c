#include "m2c.h"
void func_02116da0(s32 arg0);
void func_02116dec(s32 arg0, s32 arg1);
void func_02116d20(s32 arg0, s32 arg1);
s32 func_02116cb4(s32 arg0);
void func_02116f14(s32 arg0);
void func_02021fb4(void);
s32 func_01ffdb08(s16 arg0);
void func_0202911c(s32 arg0, s32 arg1, s32 arg2);
extern void *data_02159e64;
extern u16 *data_0215a04c;
void func_02122658(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1: {
        s32 temp;

        if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
            return;
        }
        if (M2C_FIELD(data_0215a04c, u16 *, 0) != 0x11) {
            func_02116dec(arg0, 2);
            func_02116d20(arg0, 0);
        } else {
            func_02116dec(arg0, 0x12);
            func_02116d20(arg0, 2);
            func_02021fb4();
        }
        temp = func_01ffdb08(M2C_FIELD(arg0, s16 *, 0x112));
        if (temp != 0) {
            func_0202911c(temp, 0x58, 1);
        }
        M2C_FIELD(arg0, s16 *, 0x112) = -1;
        M2C_FIELD(arg0, s16 *, 0x114) = -1;
        return;
    }
    case 2:
    case 3:
        break;
    case 4:
        if (func_02116cb4(arg0) != 0) {
            func_02116f14(arg0);
        }
        return;
    }
}
