/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_021118ec(void *arg0) {
    s16 var_ip;
    void *var_r3;

    var_ip                       = 0;
    M2C_FIELD(arg0, s32 *, 0)    = 0x434D5045;
    M2C_FIELD(arg0, s16 *, 4)    = 0;
    M2C_FIELD(arg0, s16 *, 6)    = 0;
    M2C_FIELD(arg0, s16 *, 8)    = 0;
    M2C_FIELD(arg0, s16 *, 0xA)  = 0;
    M2C_FIELD(arg0, s16 *, 0xC)  = 0;
    M2C_FIELD(arg0, s16 *, 0xE)  = 0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 0;
    M2C_FIELD(arg0, s16 *, 0x16) = 0;
    var_r3                       = arg0 + 0x18;
    do {
        M2C_FIELD(var_r3, s16 *, 0) = 0;
        M2C_FIELD(var_r3, s16 *, 2) = -1;
        M2C_FIELD(var_r3, s16 *, 4) = 0;
        M2C_FIELD(var_r3, s16 *, 6) = 0;
        var_ip += 1;
        M2C_FIELD(var_r3, s16 *, 8) = 0;
        var_r3 += 0xA;
    } while ((s32) var_ip < 4);
}
