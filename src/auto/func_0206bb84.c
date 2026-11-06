/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206b9c8(s32 *);                           /* extern */
s32 func_0206b99c(s32 *);                           /* extern */

void func_0206bb84(void) {
    s32 sp4;
    s32 sp0;

    *(s32 *) 0x04000600 |= 0x8000;
    do {

    } while (func_0206b9c8(&sp4) != 0);
    do {

    } while (func_0206b99c(&sp0) != 0);
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 3;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 0;
    if (sp0 != 0) {
        M2C_FIELD((void *) 0x04000440, s32 *, 8) = sp0;
    }
    M2C_FIELD((void *) 0x04000440, s32 *, 0)    = 2;
    M2C_FIELD((void *) 0x04000440, s32 *, 8)    = sp4;
    M2C_FIELD((void *) 0x04000440, s32 *, 0x14) = 0;
}
