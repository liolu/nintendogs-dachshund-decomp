#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02149df8;

s32 func_020fd460(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02149df8 + (arg0 * 4)));
}
