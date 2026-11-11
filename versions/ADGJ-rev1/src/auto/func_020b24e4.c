#include "m2c.h"

extern M2C_UNK data_0213c798;
extern void *data_02153740;

s32 func_020b24e4(void) {
    return *((M2C_UNK *) ((s8 *) &data_0213c798 + (M2C_FIELD(data_02153740, s32 *, 0xFDAC) * 8)));
}
