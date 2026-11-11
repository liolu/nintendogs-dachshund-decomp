#include "m2c.h"

extern M2C_UNK data_0213aa2f;

s8 func_02027418(void *arg0) {
    return *((u8 *) ((s8 *) &data_0213aa2f + (*M2C_FIELD(arg0, u16 **, 0x9E8) * 0x64)));
}
