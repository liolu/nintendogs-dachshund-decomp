/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02027884(void *, s32);                     /* extern */
s32 func_0202fa5c(void *);                          /* extern */
s32 func_02036258();                                /* extern */
M2C_UNK func_0203e5e8(void *, s32);                 /* extern */
s32 func_0204469c();                                /* extern */

s32 func_020511a8(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02036258();
    if (!(func_0204469c() & 0x10)) {
        return func_0202fa5c(arg0);
    }
    if (temp_r4 == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x484) = func_02027884(arg0, temp_r4);
    func_0203e5e8(arg0, 0x295);
    return 1;
}
