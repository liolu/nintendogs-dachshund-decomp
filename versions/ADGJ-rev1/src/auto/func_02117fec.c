/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_021199f0();                             /* extern */
M2C_UNK func_02119ca4();                    /* extern */
M2C_UNK func_0211a528();                      /* extern */

void func_02117fec(void *arg0) {
    func_02119ca4(arg0 + 0x2C, func_021199f0(arg0 + 0x3C));
    if ((M2C_FIELD(arg0, s32 *, 0x2C) != 0) && (M2C_FIELD(arg0, u16 *, 0) == 1)) {
        func_0211a528(arg0 + 0x2C);
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0) != 2) {
        return;
    }
    func_0211a528(arg0 + 0x2C);
}
