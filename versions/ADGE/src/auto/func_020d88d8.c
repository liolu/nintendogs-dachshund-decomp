/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020d8ab4(M2C_UNK);
M2C_UNK func_020f0af4(M2C_UNK);

extern void *data_02159e70;

void func_020d88d8(s32 arg0) {
    func_020d8ab4(arg0);
    if (func_020f0af4(arg0 + 4) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1CE0) = 3;
        M2C_FIELD(data_02159e70, s32 *, 0x48C0) = 3;
    }
    if (func_020f0af4(arg0 + 0x40) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1CE0) = 4;
        M2C_FIELD(data_02159e70, s32 *, 0x48C0) = 4;
    }
    if (func_020f0af4(arg0 + 0x7C) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1CE0) = 5;
        M2C_FIELD(data_02159e70, s32 *, 0x48C0) = 5;
    }
    if (func_020f0af4(arg0 + 0xB8) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1CE0) = 1;
        M2C_FIELD(data_02159e70, s32 *, 0x48C0) = 1;
    }
    if (func_020f0af4(arg0 + 0xF4) == 0) {
        return;
    }
    M2C_FIELD(data_02159e70, s32 *, 0x1CE0) = 2;
    M2C_FIELD(data_02159e70, s32 *, 0x48C0) = 2;
}
