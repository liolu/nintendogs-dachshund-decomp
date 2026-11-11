/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c04f0(M2C_UNK *, M2C_UNK *);            /* extern */
extern void *data_02155660;
extern M2C_UNK func_020bec94;

s32 func_020bf148(void) {
    M2C_UNK sp0;

    if (M2C_FIELD(data_02155660, s32 *, 0x20) == 1) {
        M2C_FIELD(data_02155660, s32 *, 0x20) = 4;
        if (func_020c04f0(&func_020bec94, &sp0) == 0) {
            return 0;
        }
        M2C_FIELD(data_02155660, s32 *, 0x24) = 0;
        return 1;
    }
    return 0;
}
