#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02153dd0;

void func_0207c8e0(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(&data_02153dd0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(&data_02153dd0, s32 *, 4);
}
