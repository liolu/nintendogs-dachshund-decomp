#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214f550;

void func_0206d42c(s32 arg0) {
    M2C_FIELD(&data_0214f550, s32 *, 0x20) = arg0;
}
