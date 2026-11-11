/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02009ea8();                             /* extern */

void func_0202afa0(void *arg0) {
    if (func_02009ea8(arg0 + 0x18C) != 0) {
        M2C_FIELD(arg0, s16 *, 0xEA) = 0x497;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0xEA) = 0x498;
}
