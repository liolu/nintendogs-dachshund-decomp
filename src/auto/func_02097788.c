/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_020c9da8();                                /* extern */

void func_02097788(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x24) = 2;
    M2C_FIELD(arg0, s16 *, 0x26) = 0x1A;
    M2C_FIELD(arg0, s16 *, 0x7C) = func_020c9da8();
    *(u16 *) 0x04000304 &= ~0x8000;
}
