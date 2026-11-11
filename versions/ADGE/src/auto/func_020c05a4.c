#include "engine.h"
#include "m2c.h"

void func_02064d48(M2C_UNK);
M2C_UNK func_020c05c8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02140b90;

void func_020c05a4(s32 arg0, s32 arg1) {
    func_020c05c8((s32) &data_02140b90, (s32) func_02064d48, arg0, arg1);
}
