/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bac9c(void *);                          /* extern */

s32 func_020b8978(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 0) != 1) {
        return 0;
    }
    return func_020bac9c(arg0 + 0x2C);
}
