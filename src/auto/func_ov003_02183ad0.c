/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02022b6c();                            /* extern */
s32 func_02022dc0(void *);                          /* extern */
s32 func_02022e04(void *, M2C_UNK);                 /* extern */
s32 func_0202c0c0(void *, M2C_UNK);                 /* extern */
M2C_UNK func_0203e5e8(void *, s32);                 /* extern */

void func_ov003_02183ad0(void *arg0) {
    func_02022b6c();
    if (func_0202c0c0(arg0, 1) != 0) {
        return;
    }
    if ((func_02022dc0(arg0) != 0) && (func_02022e04(arg0, 0x1C) == 0)) {
        func_0203e5e8(arg0, 0x1CA);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u16 *, 0xFC) <= 0x12CU) {
        return;
    }
    func_0203e5e8(arg0, 0x1CA);
}
