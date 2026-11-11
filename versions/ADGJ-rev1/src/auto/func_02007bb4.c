/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

void func_02007bb4(void *arg0, s16 arg1) {
    s32 var_r3;
    void *temp_r1;

    var_r3                       = 0;
    M2C_FIELD(arg0, s16 *, 0)    = 0;
    M2C_FIELD(arg0, s16 *, 2)    = 0;
    M2C_FIELD(arg0, s16 *, 4)    = 0;
    M2C_FIELD(arg0, s16 *, 6)    = 0;
    M2C_FIELD(arg0, s16 *, 8)    = 0;
    M2C_FIELD(arg0, s16 *, 0xA)  = arg1;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = 0;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    do {
        temp_r1 = arg0 + (var_r3 * 2);
        var_r3 += 1;
        M2C_FIELD(temp_r1, s16 *, 0x24)  = 0;
        M2C_FIELD(temp_r1, s16 *, 0x1A4) = 0;
    } while (var_r3 < 0xC0);
}
