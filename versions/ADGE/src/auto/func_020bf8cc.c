#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02140a04;
extern s32 data_02155678;

s32 func_020bf8cc(void) {
    return *((M2C_UNK *) ((s8 *) &data_02140a04 + (data_02155678 * 4)));
}
