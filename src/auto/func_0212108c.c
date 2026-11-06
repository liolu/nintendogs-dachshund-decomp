/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02157b60;

s32 func_0212108c(void) {
    if ((M2C_FIELD(data_02157b60, s32 *, 0x10C) == 1) && (M2C_FIELD(data_02157b60, s32 *, 0x110) == 1)) {
        return 1;
    }
    return 0;
}
