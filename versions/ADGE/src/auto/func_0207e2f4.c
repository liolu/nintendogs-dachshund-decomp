#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02129300;

void func_0207e2f4(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0)       = &data_02129300;
    M2C_FIELD(arg0, volatile s32 *, 4)   = arg1;
    M2C_FIELD(arg0, volatile s32 *, 8)   = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0xC) = 0;
}
