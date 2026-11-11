/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020870e4(void *, s32);                     /* extern */
M2C_UNK func_02087274(void *, s32);                 /* extern */
M2C_UNK func_02087a3c();                            /* extern */
s32 func_02087ad8(s32);                             /* extern */

s32 func_020879f4(void *arg0) {
    func_02087274(arg0, func_020870e4(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_02087ad8(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_02087a3c();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
