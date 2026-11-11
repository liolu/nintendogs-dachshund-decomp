/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02067ca0(s32, M2C_UNK);                    /* extern */
extern u16 data_0214caa0;
extern u16 data_0214caa4;
extern u16 data_0214caa8;
extern u16 data_0214caac;
extern u16 data_0214cab0;
extern u16 data_0214cab4;
extern u16 data_0214cab8;
extern u16 data_0214cabc;
extern u16 data_0214cac0;
extern u16 data_0214cac4;
extern u16 data_0214cac8;
extern u16 data_0214cacc;
extern s32 data_0215a074;

void func_0211be1c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + data_0215a074);
    temp_r0                   = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 >= 0x18000) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_r0 - 0x18000);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0_2 < 0x5000) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0214cab8 | (data_0214cab4 << 5) | (data_0214caa8 << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0214cab8 | (data_0214cab4 << 5) | (data_0214caa8 << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = 0;
        M2C_FIELD(arg0, s16 *, 0x10) = 3;
        return;
    }
    if (temp_r0_2 < 0x5800) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0214cab8 | (data_0214cab4 << 5) | (data_0214caa8 << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0214cacc | (data_0214cac8 << 5) | (data_0214cac4 << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = func_02067ca0(temp_r0_2 - 0x5000, 0x800);
        M2C_FIELD(arg0, s16 *, 0x10) = 0;
        return;
    }
    if (temp_r0_2 < 0x6800) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0214cacc | (data_0214cac8 << 5) | (data_0214cac4 << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0214cacc | (data_0214cac8 << 5) | (data_0214cac4 << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = 0;
        M2C_FIELD(arg0, s16 *, 0x10) = 0;
        return;
    }
    if (temp_r0_2 < 0x7000) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0214cacc | (data_0214cac8 << 5) | (data_0214cac4 << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0214cac0 | (data_0214cabc << 5) | (data_0214caa0 << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = func_02067ca0(temp_r0_2 - 0x6800, 0x800);
        M2C_FIELD(arg0, s16 *, 0x10) = 0;
        return;
    }
    if (temp_r0_2 < 0x11000) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0214cac0 | (data_0214cabc << 5) | (data_0214caa0 << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0214cac0 | (data_0214cabc << 5) | (data_0214caa0 << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = 0;
        M2C_FIELD(arg0, s16 *, 0x10) = 1;
        return;
    }
    if (temp_r0_2 < 0x11800) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0214cac0 | (data_0214cabc << 5) | (data_0214caa0 << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0214caa4 | (data_0214cab0 << 5) | (data_0214caac << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = func_02067ca0(temp_r0_2 - 0x11000, 0x800);
        M2C_FIELD(arg0, s16 *, 0x10) = 1;
        return;
    }
    if (temp_r0_2 < 0x12800) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0214caa4 | (data_0214cab0 << 5) | (data_0214caac << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0214caa4 | (data_0214cab0 << 5) | (data_0214caac << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = 0;
        M2C_FIELD(arg0, s16 *, 0x10) = 2;
        return;
    }
    if (temp_r0_2 < 0x13000) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0214caa4 | (data_0214cab0 << 5) | (data_0214caac << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0214cab8 | (data_0214cab4 << 5) | (data_0214caa8 << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = func_02067ca0(temp_r0_2 - 0x12800, 0x800);
        M2C_FIELD(arg0, s16 *, 0x10) = 2;
        return;
    }
    M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0214cab8 | (data_0214cab4 << 5) | (data_0214caa8 << 0xA));
    M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0214cab8 | (data_0214cab4 << 5) | (data_0214caa8 << 0xA));
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 3;
}
