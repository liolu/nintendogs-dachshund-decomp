/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02027530();                              /* extern */
s32 func_020276f8(M2C_UNK);                         /* extern */
s32 func_0204474c(s32, s16);                        /* extern */
extern s32 data_021544d8;

s32 func_02091344(M2C_UNK arg0, s16 arg1, s32 arg2) {
    void *temp_r4;

    temp_r4                         = func_02027530();
    data_021544d8                   = func_0204474c(func_020276f8(arg0), arg1);
    M2C_FIELD(temp_r4, s16 *, 0x80) = arg1;
    M2C_FIELD(temp_r4, s32 *, 0x84) = 0;
    M2C_FIELD(temp_r4, s16 *, 0x8A) = 3;
    if (arg2 > 0x8FC) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 0x10;
    } else if (arg2 > 0x898) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 0xF;
    } else if (arg2 > 0x834) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 0xE;
    } else if (arg2 > 0x7D0) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 0xD;
    } else if (arg2 > 0x76C) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 0xC;
    } else if (arg2 > 0x708) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 0xB;
    } else if (arg2 > 0x6A4) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 0xA;
    } else if (arg2 > 0x640) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 9;
    } else if (arg2 > 0x5DC) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 8;
    } else if (arg2 > 0x578) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 7;
    } else if (arg2 > 0x514) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 6;
    } else if (arg2 > 0x4B0) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 5;
    } else if (arg2 > 0x44C) {
        M2C_FIELD(temp_r4, s16 *, 0x8A) = 4;
    }
    return 1;
}
