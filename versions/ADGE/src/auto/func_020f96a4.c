/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b182c(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_020f96a4(void *arg0, M2C_UNK arg1) {
    func_020b182c(arg0, arg1, 3);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) + 0x52);
}
