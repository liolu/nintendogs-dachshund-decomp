/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02022ddc(void *arg0, s32 arg1, s32 arg2) {
    if ((M2C_FIELD(arg0, s16 *, 0xF0) == (arg1 + 0xC)) && (M2C_FIELD(arg0, u8 *, 0xA5) == arg2)) {
        return 1;
    }
    return 0;
}
