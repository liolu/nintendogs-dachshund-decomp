/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_0207e648(void *, u32, s32);

s32 func_0207e40c(u8 *arg0, s32 arg1) {
    s32 r5;
    u8 *r4;
    u8 *r0;

    r4 = arg0 + 0x24;
    r5 = *(s32 *) r4;
    r0 = (u8 *) func_0207e648(r4, 0x10, 4);
    if (r0 == NULL) {
        return 0;
    }
    *(s32 *) r0         = arg1;
    *(s32 *) (r0 + 4)   = r5;
    *(s32 *) (r0 + 8)   = *(s32 *) (r4 + 4);
    *(s32 *) (r0 + 0xC) = *(s32 *) (r4 + 8);
    *(u8 **) (r4 + 8)   = r0;
    return 1;
}
