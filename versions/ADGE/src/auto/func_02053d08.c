/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202fa5c(M2C_UNK);                         /* extern */
s32 func_02036258();                                /* extern */
M2C_UNK func_0203e5e8(M2C_UNK, s32);                /* extern */
s32 func_0204469c();                                /* extern */

s32 func_02053d08(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02036258();
    if (!(func_0204469c() & 2)) {
        return func_0202fa5c(arg0);
    }
    if (temp_r4 == 0) {
        return 0;
    }
    func_0203e5e8(arg0, 0x282);
    return 1;
}
