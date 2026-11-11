/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_02156ec0;

s32 func_020c1750(void) {
    if ((M2C_FIELD(data_02156ec0, s32 *, 0x10C) == 1) && (M2C_FIELD(data_02156ec0, s32 *, 0x110) == 1)) {
        return 1;
    }
    return 0;
}
