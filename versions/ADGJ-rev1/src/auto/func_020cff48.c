#include "m2c.h"

extern void *data_02154c78;

void func_020cff48(void) {
    if (M2C_FIELD(data_02154c78, s16 *, 6) != 5) {
        M2C_FIELD(data_02154c78, s16 *, 8) = 1;
    }
}
