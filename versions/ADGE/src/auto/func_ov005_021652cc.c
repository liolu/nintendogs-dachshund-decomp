/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_01ffdb08(s16);
s32 func_02027f68(s32, s32);

s32 func_ov005_021652cc(void *arg0) {
    s16 *p = *(s16 **) ((u8 *) arg0 + 0x214);
    if (func_02027f68(func_01ffdb08(*p), 7) >= 0x2710) {
        return 1;
    }
    return 0;
}
