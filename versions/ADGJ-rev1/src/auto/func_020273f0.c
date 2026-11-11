#include "m2c.h"

extern M2C_UNK data_0213931f;

s8 func_020273f0(void *arg0) {
    return *((u8 *) ((s8 *) &data_0213931f + (*M2C_FIELD(arg0, u16 **, 0x9E4) * 0x64)));
}
