#include "m2c.h"

M2C_UNK func_021077e0();                            /* extern */

void func_0210bcc8(void *arg0) {
    void *temp_r2;

    temp_r2                         = *M2C_FIELD(arg0, void ***, 0x214);
    M2C_FIELD(temp_r2, u16 *, 0x20) = (u16) (M2C_FIELD(temp_r2, u16 *, 0x20) | 1);
    func_021077e0(arg0);
}
