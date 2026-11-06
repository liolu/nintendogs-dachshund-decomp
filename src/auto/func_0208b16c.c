/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208a85c(void *, s32);                     /* extern */
M2C_UNK func_0208a9ec(void *, s32);                 /* extern */
M2C_UNK func_0208b1b4();                            /* extern */
s32 func_0208b250(s32);                             /* extern */

s32 func_0208b16c(void *arg0) {
    func_0208a9ec(arg0, func_0208a85c(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_0208b250(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_0208b1b4();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
