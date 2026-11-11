#include "m2c.h"
extern void *data_0215a048;
extern u8 data_027c0bb4;
extern s16 data_02131634[];
extern s16 data_02131636[];
extern s16 data_02131638[];
void func_020fb758();
s32 func_020fb3b8(M2C_UNK, M2C_UNK);
void func_020fb170();
void func_020c9f64(M2C_UNK);
void func_020fb07c(s32 arg0) {
    s32 idx;
    s32 kind;
    s32 j;

    idx = 0;
    if (data_0215a048 != NULL && M2C_FIELD(data_0215a048, u16 *, 6) == 0x18) {
        idx = 1;
    }
    if (data_027c0bb4 == 0 && M2C_FIELD(arg0, s32 *, 0x24) == 0) {
        func_020fb758();
    }
    kind = M2C_FIELD(arg0, s32 *, 0x24);
    if (kind == 0) {
        j = 0;
    } else if (kind == 1) {
        j = 1;
    } else if (kind == 2) {
        j = 2;
    } else {
        j = 0;
    }
    M2C_FIELD(arg0, u16 *, 0x28) = (u16) func_020fb3b8(idx, j);
    M2C_FIELD(arg0, s16 *, 0x2A) = *(s16 *) ((s8 *) &data_02131634 + idx * 0x12 + j * 6);
    M2C_FIELD(arg0, s16 *, 0x2C) = *(s16 *) ((s8 *) &data_02131636 + idx * 0x12 + j * 6);
    M2C_FIELD(arg0, s16 *, 0x2E) = *(s16 *) ((s8 *) &data_02131638 + idx * 0x12 + j * 6);
    if (M2C_FIELD(arg0, s32 *, 0x24) == 0) {
        func_020fb170();
    }
    func_020c9f64(arg0);
}
