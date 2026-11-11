/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c51a0(u8);                          /* extern */

s32 func_02070bb4(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return 0;
    }
    func_020c51a0(M2C_FIELD(temp_r0, u8 *, 0x3C));
    return 1;
}
