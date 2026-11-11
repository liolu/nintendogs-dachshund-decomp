/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020ba42c(M2C_UNK, M2C_UNK);
void func_020ba460(M2C_UNK);
void func_020bae1c(M2C_UNK);
void func_020bae2c(M2C_UNK, M2C_UNK);
void func_020bae34(M2C_UNK);
M2C_UNK func_020c7790(M2C_UNK);

extern M2C_UNK data_0213eec4;
extern M2C_UNK data_0213eed0;

void func_020b88b4(s32 arg0, s32 arg1) {
    M2C_FIELD(arg1, s16 *, 0x24) = 1;
    M2C_FIELD(arg0, s16 *, 0)    = 0;
    func_020bae34(arg0 + 0x2C);
    M2C_FIELD(arg0, s32 *, 0x64) = func_020c7790((s32) &data_0213eec4);
    M2C_FIELD(arg0, s32 *, 0x68) = func_020c7790((s32) &data_0213eed0);
    func_020bae2c(arg0 + 0x2C, M2C_FIELD(arg0, s32 *, 0x64));
    func_020bae1c(arg0 + 0x2C);
    func_020ba460(arg0 + 0x2C);
    func_020ba42c(arg0 + 0x2C, arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
}
