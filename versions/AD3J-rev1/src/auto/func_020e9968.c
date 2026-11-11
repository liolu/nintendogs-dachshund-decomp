/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020f0690(void);

extern M2C_UNK data_02154cb8;

s32 func_020e9968(void) {
    if ((func_020f0690() != 0) || (M2C_FIELD(&data_02154cb8, s32 *, 0x20) != 0)) {
        return 1;
    }
    return 0;
}
