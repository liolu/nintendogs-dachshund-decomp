#include "engine.h"
#include "m2c.h"

extern void *data_02159e6c;

void func_020d57d4(void) {
    if (M2C_FIELD(data_02159e6c, s16 *, 6) != 5) {
        M2C_FIELD(data_02159e6c, s16 *, 8) = 1;
    }
}
