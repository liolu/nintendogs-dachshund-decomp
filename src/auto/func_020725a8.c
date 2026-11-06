/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207177c();                            /* extern */

void func_020725a8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        return;
    }
    func_0207177c();
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}
