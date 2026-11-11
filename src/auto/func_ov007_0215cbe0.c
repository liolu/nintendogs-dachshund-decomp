/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov007_0215e7fc;

s32 func_ov007_0215cbe0(void) {
    u8 *p = data_ov007_0215e7fc;
    if (*(s32 *) (p + 0x10C) == 1) {
        if (*(s32 *) (p + 0x110) == 1) {
            return 1;
        }
    }
    return 0;
}
