/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203535c(void *);                          /* extern */
M2C_UNK func_0203e5e8(void *, s32);                 /* extern */

void func_ov003_0218d298(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0xFA) == 0x20) {
        M2C_FIELD(arg0, s16 *, 0xFA) = 0;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x436);
}
