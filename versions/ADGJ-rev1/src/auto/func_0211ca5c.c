#include "m2c.h"

M2C_UNK func_021199f0(void *, u8);                  /* extern */

void func_0211ca5c(s32 *arg0, s32 arg1) {
    u8 var_r1;

    var_r1 = arg1 + 2;
    if (*arg0 == 2) {
        var_r1 += 1;
    }
    func_021199f0(((s8 *) arg0 + 8), var_r1);
}
