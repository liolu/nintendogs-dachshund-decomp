#include "m2c.h"

extern M2C_UNK data_0213931c;

s8 func_02027430(void *arg0) {
    return *((u8 *) ((s8 *) &data_0213931c + (*M2C_FIELD(arg0, u16 **, 0x9E4) * 0x64)));
}
