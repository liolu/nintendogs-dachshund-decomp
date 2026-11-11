/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u16 *data_0215a04c;

s32 func_0202dfb0(void *arg0) {
    if ((*data_0215a04c == 0x11) && (M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), u8 *, 0x72) == 2)) {
        return 1;
    }
    return 0;
}
