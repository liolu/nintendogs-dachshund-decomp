/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020039d0();                                /* extern */
extern void *data_02153740;

void func_020ba248(s32 *arg0) {
    *arg0 += 1;
    if (func_020039d0() != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
    }
}
