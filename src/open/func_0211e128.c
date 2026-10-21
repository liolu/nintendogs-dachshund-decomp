#include "m2c.h"
s32 func_02116da0(s32 arg0);
void func_02114c5c(s32 arg0);
void func_0211e29c(s32 arg0);
void func_02116dec(s32 arg0, s32 arg1);
void func_02116d20(s32 arg0, s32 arg1);
s32 func_02116cb4(s32 arg0);
void func_02116f14(s32 arg0);
extern void *data_0215a044;
extern void *data_0215a064;
extern void *data_02159e64;
void func_0211e128(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        if (func_02116da0(arg0) == 0) {
            return;
        }
        func_02114c5c(arg0);
        if (M2C_FIELD(data_0215a044, s16 *, 0x0) == 0) {
            M2C_FIELD(arg0, u16 *, 0x2A) = 1;
        } else {
            M2C_FIELD(arg0, u16 *, 0x2A) = 0;
        }
        return;
    case 1:
        switch (M2C_FIELD(arg0, s16 *, 0x2A)) {
        case 0:
            if (M2C_FIELD(arg0, s32 *, 0x134) == -3) {
                func_02116dec(arg0, 0xA);
                func_02116d20(arg0, 0);
                M2C_FIELD(data_0215a064, u32 *, 0x20) &= ~1;
                M2C_FIELD(data_0215a064, u32 *, 0x20) &= ~2;
            } else {
                func_0211e29c(arg0);
            }
            return;
        case 1:
            if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
                return;
            }
            M2C_FIELD(arg0, u16 *, 0x2A) = 0;
            if (M2C_FIELD(arg0, s32 *, 0x134) == -2) {
                M2C_FIELD(arg0, s32 *, 0x134) = 0x8CA0;
            }
            M2C_FIELD(data_0215a064, u32 *, 0x20) |= 1;
            M2C_FIELD(data_0215a064, u32 *, 0x20) |= 2;
            return;
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
