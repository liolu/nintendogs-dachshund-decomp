/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ca3a8();                                /* extern */
extern void *data_02159e28;

void func_020c91a8(void) {
    M2C_FIELD(data_02159e28, s32 *, 0x3C) = func_020ca3a8();
}
