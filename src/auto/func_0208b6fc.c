/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0208aff8(u8 *, s32);

s32 func_0208b6fc(u8 *arg0) {
    u32 *p;

    if (func_0208aff8(arg0, 8) == 0) {
        return 0;
    }
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0x10) = 0xE;
    p                      = (u32 *) (arg0 + 0xC);
    *p                     = *p & ~0x30;
    return 1;
}
