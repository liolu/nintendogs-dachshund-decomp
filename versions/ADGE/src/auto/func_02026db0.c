/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02026db0(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s16 *, 0xEA) == 0x4EC) && (arg1 == (s16) M2C_FIELD(arg0, s32 *, 0x484))) {
        return 1;
    }
    return 0;
}
