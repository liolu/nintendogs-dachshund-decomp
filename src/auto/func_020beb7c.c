/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b10cc();                            /* extern */
M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_020beb7c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 4) <= 0x78) {
        return;
    }
    func_020b8b0c(0, 3, 0);
    func_020b10cc();
}
