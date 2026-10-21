#include "m2c.h"
void func_020a7de0(s32);
void func_020b95c4(s32);
void func_020b95d0(s32, s32, s32, s32);
void func_020bbd7c(s32, s32, s32);
void func_020bc004(s32, s32, s32, s32);
s32 func_020a6b10(s32);
extern M2C_UNK data_0214d5fc;
extern void *data_0215a064;
void func_020bbab0(s32 arg0) {
    switch (func_020a6b10((s32) M2C_FIELD(data_0215a064, s16 *, 0x7C))) {
    case 4:
        func_020bc004(arg0, 0xC8, 3, 2);
        break;
    case 5:
        func_020bc004(arg0, 0xC8, 3, 3);
        break;
    case 6:
        func_020bbd7c(arg0, 0x5A, 0);
        break;
    case 0:
    case 1:
        func_020b95d0(arg0, 3, -1, 0);
        break;
    case 11:
        func_020a7de0(1);
        if (M2C_FIELD(arg0, s32 *, 0x34) == 2) {
            func_020b95d0(arg0, 0x15, -1, 0);
        }
        if ((u16) (M2C_FIELD(&data_0214d5fc, u16 *, 0) & 0x200) == 0) {
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x34) == 0x15) {
            func_020b95d0(arg0, 0x1C, -1, 0);
            func_020b95c4(arg0);
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x34) == 0x1C) {
            func_020b95d0(arg0, 0x15, -1, 0);
            func_020b95c4(arg0);
        }
        break;
    case 12:
        func_020a7de0(1);
        if (M2C_FIELD(arg0, s32 *, 0x34) == 2) {
            func_020b95d0(arg0, 3, -1, 0);
        }
        if ((u16) (M2C_FIELD(&data_0214d5fc, u16 *, 0) & 0x200) == 0) {
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x34) == 3) {
            func_020b95d0(arg0, 0x1B, -1, 0);
            func_020b95c4(arg0);
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x34) == 0x1B) {
            func_020b95d0(arg0, 3, -1, 0);
            func_020b95c4(arg0);
        }
        break;
    case 13:
        func_020bc004(arg0, 0x5A, 0, 3);
        break;
    default:
        func_020bc004(arg0, 0x5A, 0, 3);
        break;
    }
}
