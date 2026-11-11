/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ba164();                             /* extern */
M2C_UNK func_020ba418();                    /* extern */
M2C_UNK func_020bac9c();                      /* extern */

void func_020b8708(void *arg0) {
    func_020ba418(arg0 + 0x2C, func_020ba164(arg0 + 0x3C));
    if ((M2C_FIELD(arg0, s32 *, 0x2C) != 0) && (M2C_FIELD(arg0, u16 *, 0) == 1)) {
        func_020bac9c(arg0 + 0x2C);
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0) != 2) {
        return;
    }
    func_020bac9c(arg0 + 0x2C);
}
