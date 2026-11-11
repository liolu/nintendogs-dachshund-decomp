/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02069098(s32, M2C_UNK);                    /* extern */
extern u16 data_0213bd14;
extern u16 data_0213bd18;
extern u16 data_0213bd1c;
extern u16 data_0213bd20;
extern u16 data_0213bd24;
extern u16 data_0213bd28;
extern u16 data_0213bd2c;
extern u16 data_0213bd30;
extern u16 data_0213bd34;
extern u16 data_0213bd38;
extern u16 data_0213bd3c;
extern u16 data_0213bd40;
extern s32 data_02153730;

void func_0209a68c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + data_02153730);
    temp_r0                   = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 >= 0x18000) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_r0 - 0x18000);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0_2 < 0x5000) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0213bd2c | (data_0213bd28 << 5) | (data_0213bd1c << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0213bd2c | (data_0213bd28 << 5) | (data_0213bd1c << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = 0;
        M2C_FIELD(arg0, s16 *, 0x10) = 3;
        return;
    }
    if (temp_r0_2 < 0x5800) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0213bd2c | (data_0213bd28 << 5) | (data_0213bd1c << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0213bd40 | (data_0213bd3c << 5) | (data_0213bd38 << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = func_02069098(temp_r0_2 - 0x5000, 0x800);
        M2C_FIELD(arg0, s16 *, 0x10) = 0;
        return;
    }
    if (temp_r0_2 < 0x6800) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0213bd40 | (data_0213bd3c << 5) | (data_0213bd38 << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0213bd40 | (data_0213bd3c << 5) | (data_0213bd38 << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = 0;
        M2C_FIELD(arg0, s16 *, 0x10) = 0;
        return;
    }
    if (temp_r0_2 < 0x7000) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0213bd40 | (data_0213bd3c << 5) | (data_0213bd38 << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0213bd34 | (data_0213bd30 << 5) | (data_0213bd14 << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = func_02069098(temp_r0_2 - 0x6800, 0x800);
        M2C_FIELD(arg0, s16 *, 0x10) = 0;
        return;
    }
    if (temp_r0_2 < 0x11000) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0213bd34 | (data_0213bd30 << 5) | (data_0213bd14 << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0213bd34 | (data_0213bd30 << 5) | (data_0213bd14 << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = 0;
        M2C_FIELD(arg0, s16 *, 0x10) = 1;
        return;
    }
    if (temp_r0_2 < 0x11800) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0213bd34 | (data_0213bd30 << 5) | (data_0213bd14 << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0213bd18 | (data_0213bd24 << 5) | (data_0213bd20 << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = func_02069098(temp_r0_2 - 0x11000, 0x800);
        M2C_FIELD(arg0, s16 *, 0x10) = 1;
        return;
    }
    if (temp_r0_2 < 0x12800) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0213bd18 | (data_0213bd24 << 5) | (data_0213bd20 << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0213bd18 | (data_0213bd24 << 5) | (data_0213bd20 << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = 0;
        M2C_FIELD(arg0, s16 *, 0x10) = 2;
        return;
    }
    if (temp_r0_2 < 0x13000) {
        M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0213bd18 | (data_0213bd24 << 5) | (data_0213bd20 << 0xA));
        M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0213bd2c | (data_0213bd28 << 5) | (data_0213bd1c << 0xA));
        M2C_FIELD(arg0, s32 *, 8)    = func_02069098(temp_r0_2 - 0x12800, 0x800);
        M2C_FIELD(arg0, s16 *, 0x10) = 2;
        return;
    }
    M2C_FIELD(arg0, s16 *, 4)    = (s16) (data_0213bd2c | (data_0213bd28 << 5) | (data_0213bd1c << 0xA));
    M2C_FIELD(arg0, s16 *, 6)    = (s16) (data_0213bd2c | (data_0213bd28 << 5) | (data_0213bd1c << 0xA));
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 3;
}
