#include "m2c.h"

M2C_UNK func_02092a38(s32, s32, void *);            /* extern */

void func_02092ef8(void *arg0, void *arg1) {
    func_02092a38(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg1, s32 *, 0x14), arg1 + 8);
}
