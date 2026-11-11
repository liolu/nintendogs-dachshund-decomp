/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020f0af4(M2C_UNK);

extern void *data_02159e70;

void func_020ef8c8(s32 arg0) {
    if (func_020f0af4(arg0 + 0x18) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1D80) = 3;
    }
    if (func_020f0af4(arg0 + 0x54) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1D80) = 2;
    }
    if (func_020f0af4(arg0 + 0x90) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1D80) = 1;
    }
    func_020f0af4(arg0 + 0xCC);
    func_020f0af4(arg0 + 0x108);
    func_020f0af4(arg0 + 0x144);
    if (func_020f0af4(arg0 + 0x180) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1D80) = 4;
    }
    if (func_020f0af4(arg0 + 0x1BC) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1D80) = 5;
    }
    if (func_020f0af4(arg0 + 0x1F8) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1D80) = 6;
    }
}
