#include "m2c.h"
s32 func_02116da0(s32 arg0);
void func_ov004_0215a140(void);
s32 func_02122174(s32 arg0);
s32 func_0211de24(s32 arg0);
void func_02117964(s32 arg0);
s32 func_02116cb4(s32 arg0);
void func_02116f14(s32 arg0);
s32 func_ov004_0215a770(void);
extern void *data_0215a064;
void func_0211dd00(s32 arg0) {
    s16 var_r0;
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        if (func_02116da0(arg0) == 0) { return; }
        func_ov004_0215a140();
        M2C_FIELD(data_0215a064, s32 *, 0x20) |= 1;
        M2C_FIELD(data_0215a064, s32 *, 0x20) |= 2;
        return;
    case 1:
        if (func_02122174(arg0) != 0) { return; }
        if (func_0211de24(arg0) != 0) { return; }
        switch (M2C_FIELD(arg0, s16 *, 0x2A)) {
        case 0:
            var_r0 = (s16) func_ov004_0215a770();
            if (var_r0 == -1) { return; }
            M2C_FIELD(arg0, u16 *, 0x2A) = 1;
            M2C_FIELD(arg0, s16 *, 0x7C) = var_r0;
            func_02117964(arg0);
            return;
        case 1:
            if (M2C_FIELD(arg0, s16 *, 0x7C) == -1) {
                M2C_FIELD(arg0, u16 *, 0x2A) = 0;
            }
            return;
        }
        return;
    case 2:
    case 3:
        break;
    case 4:
        if (func_02116cb4(arg0) != 0) { func_02116f14(arg0); }
        return;
    }
}
