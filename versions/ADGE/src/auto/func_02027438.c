#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213aa70;

s32 func_02027438(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0213aa70 + (*M2C_FIELD(arg0, u16 **, 0x9E8) * 0x64)));
}
