/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020b0e74(M2C_UNK);                         /* extern */
extern void *data_02153894;

s32 func_020bad74(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_020b0e74(8) != 0) {
        var_r4 = M2C_FIELD(data_02153894, s32 *, 0x10);
    }
    return var_r4;
}
