#include "m2c.h"

extern M2C_UNK data_02139360;

s32 func_02027410(void *arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02139360 + (*M2C_FIELD(arg0, u16 **, 0x9E4) * 0x64)));
}
