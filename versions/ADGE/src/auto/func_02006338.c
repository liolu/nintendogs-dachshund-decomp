#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214d5fc;

void func_02006338(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(&data_0214d5fc, s16 *, 0xC)  = (s16) arg0;
    M2C_FIELD(&data_0214d5fc, s16 *, 0xE)  = (s16) arg1;
    M2C_FIELD(&data_0214d5fc, s16 *, 0x10) = (s16) arg2;
}
