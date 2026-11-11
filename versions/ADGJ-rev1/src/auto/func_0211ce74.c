/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_021132fc(void *);                      /* extern */

void func_0211ce74(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 2) {
        return;
    }
    if (M2C_FIELD(arg0, s16 *, 0x5C) == -1) {
        return;
    }
    func_021132fc(arg0 + 0x30);
    M2C_FIELD(arg0, s32 *, 0x58) = 1;
}
