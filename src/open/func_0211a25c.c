#include "m2c.h"
extern void *data_0215a064;
extern s32 func_01ffdb08(s32);
extern s32 func_0202816c(s32);
void func_0211a25c(u8 *arg0) {
    s32 obj;
    u8 *temp_r4;

    if (M2C_FIELD(data_0215a064, s16 *, 0x6C) == -1) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x4) = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = 1;
    temp_r4 = M2C_FIELD(arg0, u8 **, 0x1C);
    if (temp_r4 == NULL) {
        return;
    }
    M2C_FIELD(temp_r4, s16 *, 0x6) = M2C_FIELD(data_0215a064, s16 *, 0x6C);
    if (M2C_FIELD(data_0215a064, s16 *, 0x6C) < 0) {
        goto neg;
    }
    obj = func_0202816c(func_01ffdb08(M2C_FIELD(data_0215a064, s16 *, 0x6C)));
    switch (M2C_FIELD(temp_r4, s16 *, 0x4)) {
    case 1:
        M2C_FIELD(temp_r4, s16 *, 0x8) = M2C_FIELD(obj, s16 *, 0x68);
        return;
    case 2:
    case 6:
        M2C_FIELD(temp_r4, s16 *, 0x8) = M2C_FIELD(obj, s16 *, 0x6A);
        return;
    case 3:
        M2C_FIELD(temp_r4, s16 *, 0x8) = M2C_FIELD(obj, s16 *, 0x6C);
        return;
    default:
        M2C_FIELD(temp_r4, s16 *, 0x8) = -1;
        return;
    }
neg:
    M2C_FIELD(temp_r4, s16 *, 0x8) = -1;
}
