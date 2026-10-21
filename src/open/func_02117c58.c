#include "m2c.h"
void func_02116da0(s32 arg0);
s32 func_02114aec(s32 arg0);
void func_020e1800(void);
void func_02117d0c(s32 arg0);
s32 func_02116cb4(s32 arg0);
void func_02116f14(s32 arg0);
extern void *data_02159e64;
void func_02117c58(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
        if (func_02114aec(arg0) != 0) {
            return;
        }
        if (M2C_FIELD(arg0, s16 *, 0x2A) == 1) {
            if (M2C_FIELD(data_02159e64, s32 *, 0xA4) != 0) {
                M2C_FIELD(arg0, u16 *, 0x2A) = 0;
                func_020e1800();
            }
            return;
        }
        func_02117d0c(arg0);
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
