/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203e5ac(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_ov003_0218846c(void *, M2C_UNK, M2C_UNK); /* extern */

void func_ov003_021882c8(void *arg0) {
    func_ov003_0218846c(arg0, 7, 0x7F);
    if ((u32) M2C_FIELD(arg0, u16 *, 0x11E) > 0x1EU) {
        func_0203e5ac(arg0, 0, 0x18D);
        return;
    }
    if (M2C_FIELD(arg0, s16 *, 0xEE) != 0x10E) {
        return;
    }
    func_0203e5ac(arg0, 0, 0x18F);
}
