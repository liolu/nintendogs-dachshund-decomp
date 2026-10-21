#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Nds_02028490_V3;

void func_01ff8980(s32);
void func_02114658(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_0214da84;
extern s32 data_0214da80;
extern void *data_0215a064;
extern void *data_0215a048;
void func_02028490(M2C_UNK arg0, M2C_UNK arg1) {
    Nds_02028490_V3 sp0;
    Nds_02028490_V3 spC;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r3;

    if (((*(u16 *) 0x4000304 & 0x8000) >> 15) == 0) {
        temp_r3 = (s32) data_0214da84;
        if (M2C_FIELD(temp_r3, s32 *, 0x64) == 0) {
            M2C_FIELD(temp_r3, s32 *, 0x64) = data_0214da80;
            temp_r0 = M2C_FIELD(data_0215a064, s32 *, 0x1C);
            *(Nds_02028490_V3 *) ((s32) data_0214da84 + 0x68) = *(Nds_02028490_V3 *) (temp_r0 + 0x48);
            func_01ff8980((s32) data_0214da84 + 0x68);
        }
        sp0 = *(Nds_02028490_V3 *) ((s32) data_0214da84 + 0x68);
        temp_r1 = M2C_FIELD(data_0215a048, s32 *, 0xC);
        temp_r0 = -0x3000 - temp_r1;
        spC.x = (s32) (((s64) sp0.x * temp_r0 + 0x800) >> 12);
        spC.y = (s32) (((s64) sp0.y * temp_r0 + 0x800) >> 12);
        spC.z = (s32) (((s64) sp0.z * temp_r0 + 0x800) >> 12);
        func_02114658(data_0214da80, arg1, (s32) &spC);
        return;
    }
    *(Nds_02028490_V3 *) arg1 = *(Nds_02028490_V3 *) (M2C_FIELD(data_0215a064, s32 *, 0x1C) + 0x30);
}
