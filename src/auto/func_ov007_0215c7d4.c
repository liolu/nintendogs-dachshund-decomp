/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov007_0215e7fc;

u8 *func_020c081c(void);
s32 func_0205ebd4(void *, void *, s32);

s32 func_ov007_0215c7d4(void) {
    u8 *r4;
    u8 *r0;

    r4 = data_ov007_0215e7fc + 0x12E;
    r0 = func_020c081c();
    return func_0205ebd4(r0 + 4, r4, 6) != 0;
}
