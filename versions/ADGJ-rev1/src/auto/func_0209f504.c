#include "m2c.h"

extern void *data_0215373c;

s32 func_0209f504(void) {
    if (M2C_FIELD(data_0215373c, s16 *, 0x260C) != -1) {
        return 1;
    }
    return 0;
}
