/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_0208aff8(void *, s32);

s32 func_0208b810(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *p = (u8 *) arg0;

    *(s32 *) (p + 8)    = arg1;
    *(s32 *) (p + 0x34) = arg4;
    *(s32 *) (p + 0x2C) = arg2;
    *(s32 *) (p + 0x30) = arg3;
    if (func_0208aff8(arg0, 7) == 0) {
        return 0;
    }
    *(s32 *) (p + 0xC) = *(s32 *) (p + 0xC) | 0x10;
    *(s32 *) (p + 0xC) = *(s32 *) (p + 0xC) & ~0x20;
    return 1;
}
