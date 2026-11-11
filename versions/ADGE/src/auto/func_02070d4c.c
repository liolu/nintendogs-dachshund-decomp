/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c50d4(u8);                          /* extern */

void func_02070d4c(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return;
    }
    func_020c50d4(M2C_FIELD(temp_r0, u8 *, 0x3C));
}
