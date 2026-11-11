/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_ov027_02159b34;

s32 func_ov027_021586e8(void) {
    if ((M2C_FIELD(data_ov027_02159b34, s32 *, 0x108) == 1) && (M2C_FIELD(data_ov027_02159b34, s32 *, 0x10C) == 1)) {
        return 1;
    }
    return 0;
}
