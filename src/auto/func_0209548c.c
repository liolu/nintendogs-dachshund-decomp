/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02153720;

s32 func_0209548c(void) {
    s32 var_r0;

    var_r0 = -1;
    if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 1) {
        return -1;
    }
    if (M2C_FIELD(data_02153720, u16 *, 0x84) & 2) {
        var_r0 = 0;
    }
    return var_r0;
}
