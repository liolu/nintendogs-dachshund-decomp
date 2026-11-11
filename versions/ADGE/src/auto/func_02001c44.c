#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214cce0;

void func_02001c44(s32 arg0) {
    M2C_FIELD(&data_0214cce0, s32 *, 0xC) = arg0;
}
