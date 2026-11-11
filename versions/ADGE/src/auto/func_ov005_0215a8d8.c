#include "m2c.h"

M2C_UNK func_ov005_0215a8f4(void *, M2C_UNK);       /* extern */

void func_ov005_0215a8d8(void *arg0) {
    M2C_UNK var_r1;

    if ((u32) M2C_FIELD(arg0, u16 *, 0xFC) > 0x3CU) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_ov005_0215a8f4(arg0, var_r1);
}
