/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02084564();                                /* extern */
s32 func_020845b0();                                /* extern */
s32 func_0208463c();                                /* extern */
M2C_UNK func_02084644(s32);                         /* extern */

void func_02084428(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = func_020845b0();
    M2C_FIELD(arg0, s32 *, 4) = func_02084564();
    M2C_FIELD(arg0, s32 *, 8) = func_0208463c();
    func_02084644(0x02600029);
}
