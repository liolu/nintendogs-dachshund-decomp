#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02144de4;
extern void *data_02159e70;

s32 func_020e5304(void) {
    return *((M2C_UNK *) ((s8 *) &data_02144de4 + (M2C_FIELD(data_02159e70, s32 *, 0x1113C) * 8)));
}
