/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c05a4(M2C_UNK *, M2C_UNK *);            /* extern */
s32 func_020c0720(M2C_UNK, M2C_UNK *);              /* extern */
extern void *data_02155660;
extern M2C_UNK func_020beccc;

s32 func_020bf1c4(void) {
    M2C_UNK sp0;

    if (M2C_FIELD(data_02155660, s32 *, 0x20) == 0) {
        M2C_FIELD(data_02155660, s32 *, 0x2C) = 0;
        M2C_FIELD(data_02155660, s16 *, 0x28) = 0;
        M2C_FIELD(data_02155660, s16 *, 0x2A) = 0;
        M2C_FIELD(data_02155660, s16 *, 0x50) = 0xB4;
        if (func_020c0720(2, &sp0) == 0) {
            return 0;
        }
        return func_020c05a4(&func_020beccc, &sp0);
    }
    return 0;
}
