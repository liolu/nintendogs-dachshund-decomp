#include "m2c.h"

extern M2C_UNK data_0213aa2c;

s8 func_02027458(void *arg0) {
    return *((u8 *) ((s8 *) &data_0213aa2c + (*M2C_FIELD(arg0, u16 **, 0x9E8) * 0x64)));
}
