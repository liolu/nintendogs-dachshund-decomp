/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_0215a064;

void func_020a9968(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_ip;
    s32 var_r3;

    var_ip = M2C_FIELD(data_0215a064, s32 *, 0x94) << 0xC;
    var_r3 = M2C_FIELD(data_0215a064, s32 *, 0x98) << 0xC;
    if (var_ip > 0x50000) {
        var_ip = 0x50000;
    }
    if (var_ip < -0x50000) {
        var_ip = -0x50000;
    }
    if (var_r3 > 0x50000) {
        var_r3 = 0x50000;
    }
    if (var_r3 < -0x50000) {
        var_r3 = -0x50000;
    }
    *(M2C_UNK *) arg1 = var_ip;
    *(M2C_UNK *) arg2 = var_r3;
}
