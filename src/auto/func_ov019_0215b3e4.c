/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 *func_ov019_0215f240(void);

s32 func_ov019_0215b3e4(s32 arg0) {
    s32 *base;
    if (arg0 < 0 || arg0 >= 0x32) {
        return 0;
    }
    base = func_ov019_0215f240();
    return base[arg0 + 1];
}
