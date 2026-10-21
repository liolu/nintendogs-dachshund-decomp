#include "m2c.h"
extern M2C_UNK data_02130da8;
s32 func_020cb9f8(s32 arg0, s32 arg1);
s32 func_020cba04(s32 arg0, s32 arg1, s32 arg2);
void func_020ccd00(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 i;
    u32 j;
    s32 r;

    r = func_020cba04(arg1, arg2, arg3);
    M2C_FIELD(arg0, s16 *, 0) = 1;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = r;
    M2C_FIELD(arg0, s32 *, 0x30) = func_020cb9f8(arg1, r);
    M2C_FIELD(arg0, s16 *, 8) = 0;
    M2C_FIELD(arg0, s16 *, 0x1A) = 1;
    M2C_FIELD(arg0, s16 *, 0xC) = 0x1E;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 1;
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(&data_02130da8, s16 *, 0xA);
    for (i = 0; i < M2C_FIELD(arg0, s16 *, 0x58); i++) {
        ((s16 *) ((s8 *) arg0 + 0x5A))[i] = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x58) = 0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    for (j = 0; j < 2; j++) {
        ((s32 *) ((s8 *) arg0 + 0x38))[j] = 0;
    }
}
