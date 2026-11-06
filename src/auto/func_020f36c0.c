#include "m2c.h"

M2C_UNK func_020f3200(s32, s32, void *);            /* extern */

void func_020f36c0(void *arg0, void *arg1) {
    func_020f3200(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg1, s32 *, 0x14), arg1 + 8);
}
