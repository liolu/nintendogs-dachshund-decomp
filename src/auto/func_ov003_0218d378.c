/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02027530(void *);                          /* extern */
M2C_UNK func_0203e5e8(void *, s32);                 /* extern */
M2C_UNK func_0208a56c(s32, M2C_UNK);                /* extern */

void func_ov003_0218d378(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0xFA) == 0x20) {
        M2C_FIELD(arg0, s16 *, 0xFA) = 0;
    }
    if (((u32) M2C_FIELD(arg0, u16 *, 0xFC) > 1U) && (M2C_FIELD(arg0, s32 *, 0x464) == 0) &&
        (M2C_FIELD(arg0, s32 *, 0x2A4) == 0)) {
        func_0208a56c(func_02027530(arg0), 0x44);
        func_0208a56c(func_02027530(arg0), 0x43);
        M2C_FIELD(arg0, s32 *, 0x464) = 1;
    }
    if ((u32) M2C_FIELD(arg0, u16 *, 0xFC) <= 0x3CU) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2A4) != 0) {
        return;
    }
    func_0203e5e8(arg0, 0x433);
}
