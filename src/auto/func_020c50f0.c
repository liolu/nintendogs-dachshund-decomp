/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207d87c(void *, M2C_UNK);             /* extern */
M2C_UNK func_020c4f2c(void *, M2C_UNK);             /* extern */

void func_020c50f0(void *arg0) {
    func_020c4f2c(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    func_0207d87c(arg0 + 0x24, 0x1C);
    func_0207d87c(arg0 + 0x30, 0x1C);
    func_0207d87c(arg0 + 0x3C, 0x1C);
}
