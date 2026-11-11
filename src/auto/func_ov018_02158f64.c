/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 *func_ov018_0215cdc0(void);

s32 func_ov018_02158f64(s32 arg0) {
    s32 *base;
    if (arg0 < 0 || arg0 >= 0x32) {
        return 0;
    }
    base = func_ov018_0215cdc0();
    return base[arg0 + 1];
}
