#include "m2c.h"

extern M2C_UNK data_0213b3e7;

s8 func_0202daec(void *arg0) {
    return *((u8 *) ((s8 *) &data_0213b3e7 + (M2C_FIELD(arg0, s16 *, 0x152) * 8)));
}
