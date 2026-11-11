/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_02159e64;

void func_020d2c38(void) {
    if (M2C_FIELD(data_02159e64, s16 *, 0x6C) == 2) {
        M2C_FIELD(data_02159e64, s16 *, 0x6C) = 3;
        M2C_FIELD(data_02159e64, s16 *, 0x6E) = 0;
    }
}
