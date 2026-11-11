/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02009e0c();                             /* extern */

void func_0202af54(void *arg0) {
    if (func_02009e0c(arg0 + 0x18C) != 0) {
        M2C_FIELD(arg0, s16 *, 0xE8) = 0x496;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0xE8) = 0x497;
}
