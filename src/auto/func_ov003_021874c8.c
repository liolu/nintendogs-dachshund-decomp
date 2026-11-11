#include "m2c.h"

M2C_UNK func_ov003_0218758c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_ov003_021874c8(void *arg0) {
    M2C_UNK var_r3;

    if ((u32) M2C_FIELD(arg0, u16 *, 0xFC) > 0x3CU) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    func_ov003_0218758c(arg0, 5, 0x57, var_r3);
}
