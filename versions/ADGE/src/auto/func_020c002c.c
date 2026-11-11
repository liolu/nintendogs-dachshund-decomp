#include "engine.h"
#include "m2c.h"

void func_02064870(M2C_UNK);
M2C_UNK func_020c05c8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02140b48;

void func_020c002c(s32 arg0, s32 arg1) {
    func_020c05c8((s32) &data_02140b48, (s32) func_02064870, arg0, arg1);
}
