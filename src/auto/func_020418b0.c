#include "m2c.h"

extern M2C_UNK data_0213853c;

u16 func_020418b0(void *arg0) {
    return *((u16 *) ((s8 *) &data_0213853c + (M2C_FIELD(arg0, s8 *, 0xA6) * 2)));
}
