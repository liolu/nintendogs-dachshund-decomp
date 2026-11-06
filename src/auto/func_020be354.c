/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020be07c();                         /* extern */

void func_020be354(void *arg0) {
    func_020be07c(arg0 + 0x40);
    func_020be07c(arg0 + 0x60);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
