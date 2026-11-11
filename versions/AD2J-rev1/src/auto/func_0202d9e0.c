#include "m2c.h"

extern M2C_UNK data_02139cd7;

s8 func_0202d9e0(void *arg0) {
    return *((u8 *) ((s8 *) &data_02139cd7 + (M2C_FIELD(arg0, s16 *, 0x150) * 8)));
}
