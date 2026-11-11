/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c04f0(M2C_UNK *, M2C_UNK *);        /* extern */
extern void *data_02155660;
extern M2C_UNK func_020be950;

s32 func_020bf090(void) {
    M2C_UNK sp0;

    if (M2C_FIELD(data_02155660, s32 *, 0x20) != 1) {
        return 0;
    }
    M2C_FIELD(data_02155660, s32 *, 0x40) = 1;
    M2C_FIELD(data_02155660, s16 *, 0x44) = 0;
    M2C_FIELD(data_02155660, s16 *, 0x48) = 0;
    M2C_FIELD(data_02155660, s16 *, 0x4E) = 0;
    M2C_FIELD(data_02155660, s16 *, 0x4C) = 0;
    M2C_FIELD(data_02155660, s16 *, 0x46) = 0xA;
    M2C_FIELD(data_02155660, s16 *, 0x4A) = 6;
    M2C_FIELD(data_02155660, s32 *, 0x24) = 2;
    M2C_FIELD(data_02155660, s32 *, 0x20) = 4;
    func_020c04f0(&func_020be950, &sp0);
    M2C_FIELD(data_02155660, s32 *, 0x54) = 0;
    return 1;
}
