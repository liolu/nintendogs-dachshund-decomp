/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0207e5b4(void *arg0) {
    s32 *p;

    p    = (s32 *) ((u8 *) arg0 + 0x24);
    *p   = M2C_FIELD(arg0, s32 *, 0x18);
    p[2] = 0;
}
