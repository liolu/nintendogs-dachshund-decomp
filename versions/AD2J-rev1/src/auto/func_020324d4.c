/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020324d4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x93C) & 0x20000000) {
        return 1;
    }
    return 0;
}
