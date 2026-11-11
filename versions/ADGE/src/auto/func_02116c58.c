/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ee348();                                /* extern */
extern void *data_02159e70;

s32 func_02116c58(void) {
    s32 var_r4;

    var_r4 = -1;
    if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 1) {
        if (func_020ee348() == 1) {
            var_r4 = 1;
        }
    } else if (M2C_FIELD(data_02159e70, s32 *, 0x48B8) == 5) {
        var_r4 = 0;
    }
    return var_r4;
}
