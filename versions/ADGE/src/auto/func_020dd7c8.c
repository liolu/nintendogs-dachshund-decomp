/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020f0af4(M2C_UNK);

extern void *data_02159e70;

void func_020dd7c8(s32 arg0) {
    if (func_020f0af4(arg0 + 0x6C) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x48BC) = 1;
        return;
    }
    if (func_020f0af4(arg0 + 0xA8) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x48BC) = 1;
        return;
    }
    if (func_020f0af4(arg0 + 0xE4) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x48BC) = 4;
        M2C_FIELD(data_02159e70, s32 *, 0x1D30) = (s32) M2C_FIELD(data_02159e70, s32 *, 0xB8);
        return;
    }
    if (func_020f0af4(arg0 + 0x120) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x48BC) = 4;
        M2C_FIELD(data_02159e70, s32 *, 0x1D30) = (s32) M2C_FIELD(data_02159e70, s32 *, 0xB8);
        return;
    }
    if (func_020f0af4(arg0 + 0x15C) == 0) {
        return;
    }
    M2C_FIELD(data_02159e70, s32 *, 0x4858) = 0;
    M2C_FIELD(data_02159e70, s32 *, 0x48BC) = 3;
}
