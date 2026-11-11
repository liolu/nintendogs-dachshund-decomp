/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02159e64;

void func_020d2c64(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 temp_r4;

    temp_r4 = M2C_FIELD(data_02159e64, s16 *, 0x6C);
    if ((temp_r4 == 2) && (temp_r4 == 2)) {
        M2C_FIELD(data_02159e64, s16 *, 0x6C) = 3;
        M2C_FIELD(data_02159e64, s16 *, 0x6E) = 0;
    }
    M2C_FIELD(data_02159e64, s16 *, 0x76) = (s16) arg4;
    M2C_FIELD(data_02159e64, s16 *, 0x7A) = arg0;
    M2C_FIELD(data_02159e64, s32 *, 0x7C) = arg1;
    M2C_FIELD(data_02159e64, s32 *, 0x80) = arg2;
    M2C_FIELD(data_02159e64, s32 *, 0x84) = arg3;
    M2C_FIELD(data_02159e64, s32 *, 0x88) = 0;
    M2C_FIELD(data_02159e64, s16 *, 0x94) = -1;
    M2C_FIELD(data_02159e64, s16 *, 0x96) = -1;
    M2C_FIELD(data_02159e64, s16 *, 0x98) = 0;
    M2C_FIELD(data_02159e64, s16 *, 0x9A) = -1;
    M2C_FIELD(data_02159e64, s16 *, 0x9C) = -1;
    M2C_FIELD(data_02159e64, s32 *, 0xA0) = 0;
    M2C_FIELD(data_02159e64, s32 *, 0xA4) = 0;
}
