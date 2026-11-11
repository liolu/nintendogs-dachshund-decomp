/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_01ffda04(s16);
s32 func_02027f40(s32, s32);

s32 func_ov004_02163104(void *arg0) {
    s16 *p = *(s16 **) ((u8 *) arg0 + 0x214);
    if (func_02027f40(func_01ffda04(*p), 7) >= 0x2710) {
        return 1;
    }
    return 0;
}
