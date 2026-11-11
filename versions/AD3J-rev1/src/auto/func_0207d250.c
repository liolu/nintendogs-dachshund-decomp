/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_0207d5f0(void *, u16);                     /* extern */
s32 func_0207d5d8();                                /* extern */

s32 func_0207d250(void *arg0) {
    if (func_0207d5d8() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 0xA) = func_0207d5f0(arg0, M2C_FIELD(arg0, u16 *, 0xA));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
    return 1;
}
