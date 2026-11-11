/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov003_0216be20;

s32 func_ov003_02157c48(void) {
    u8 *p;
    u8 *q;
    s32 v;
    s32 lim;

    p   = data_ov003_0216be20;
    v   = *(s32 *) (p + 0x24);
    v   = (v + (s32) ((u32) v >> 31)) >> 1;
    lim = 0x32;
    if (v < 0x32) {
        lim = v;
    }
    q = *(u8 **) (p + 0x36C4);
    return *(s32 *) (q + 0x2264) >= lim;
}
