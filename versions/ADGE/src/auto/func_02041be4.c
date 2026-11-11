#include "m2c.h"

extern M2C_UNK data_02139c48;

u16 func_02041be4(void *arg0) {
    return *((u16 *) ((s8 *) &data_02139c48 + (M2C_FIELD(arg0, s8 *, 0x8D) * 2)));
}
