#include "m2c.h"

extern void *data_02155660;
extern M2C_UNK data_0212c5bc;

M2C_UNK func_020bfe50(void *, void *);
s32 func_020c07ec();
M2C_UNK func_02080978();
extern void func_020be6c4();

void func_020bf254(void) {
    s32 sp0;

    if (M2C_FIELD(data_02155660, s16 *, 0x30) != 0) {
        if (M2C_FIELD(data_02155660, s16 *, 0x30) == 1) {
            if (func_020bfe50(func_020be6c4, &sp0) != 0) {
                M2C_FIELD(data_02155660, s32 *, 0x20) = 4;
            }
        }
    }
    M2C_FIELD(data_02155660, s16 *, 0x30) = 0;
    if (M2C_FIELD(data_02155660, s16 *, 0x50) > 0) {
        M2C_FIELD(data_02155660, s16 *, 0x50) = M2C_FIELD(data_02155660, s16 *, 0x50) - 1;
    }
    if (M2C_FIELD(data_02155660, s32 *, 0x40) != 1) {
        return;
    }
    if (M2C_FIELD(data_02155660, s32 *, 0x20) != 2) {
        return;
    }
    if (func_020c07ec() != 0) {
        return;
    }
    if (M2C_FIELD(data_02155660, s16 *, 0x50) > 0) {
        return;
    }
    M2C_FIELD(data_02155660, s16 *, 0x70) -= 0x10;
    if (M2C_FIELD(data_02155660, s16 *, 0x70) >= 0) {
        return;
    }
    M2C_FIELD(data_02155660, s16 *, 0x4C) += 1;
    if (M2C_FIELD(data_02155660, s16 *, 0x4C) >= 4) {
        M2C_FIELD(data_02155660, s16 *, 0x4C) = 0;
        M2C_FIELD(data_02155660, s16 *, 0x4E) = func_02080978() & 3;
    }
    if (*(u8 *) (M2C_FIELD(data_02155660, s16 *, 0x4C) +
                 ((s8 *) &data_0212c5bc + M2C_FIELD(data_02155660, s16 *, 0x4E) * 4)) != 0) {
        M2C_FIELD(data_02155660, s16 *, 0x70) = 0x384;
        return;
    }
    M2C_FIELD(data_02155660, s32 *, 0x24) = 3;
    if (M2C_FIELD(data_02155660, s16 *, 0x30) == 0) {
        M2C_FIELD(data_02155660, s16 *, 0x30) = 1;
    }
}
