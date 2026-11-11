/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0211fe30(M2C_UNK *, M2C_UNK *);        /* extern */
extern void *data_021560e8;
extern M2C_UNK func_0211e324;

s32 func_0211ea64(void) {
    M2C_UNK sp0;

    if (M2C_FIELD(data_021560e8, s32 *, 0x28) != 1) {
        return 0;
    }
    M2C_FIELD(data_021560e8, s32 *, 0x48) = 1;
    M2C_FIELD(data_021560e8, s16 *, 0x4C) = 0;
    M2C_FIELD(data_021560e8, s16 *, 0x50) = 0;
    M2C_FIELD(data_021560e8, s16 *, 0x56) = 0;
    M2C_FIELD(data_021560e8, s16 *, 0x54) = 0;
    M2C_FIELD(data_021560e8, s16 *, 0x4E) = 0xA;
    M2C_FIELD(data_021560e8, s16 *, 0x52) = 6;
    M2C_FIELD(data_021560e8, s32 *, 0x2C) = 3;
    M2C_FIELD(data_021560e8, s32 *, 0x28) = 4;
    func_0211fe30(&func_0211e324, &sp0);
    M2C_FIELD(data_021560e8, s32 *, 0x5C) = 0;
    M2C_FIELD(data_021560e8, s16 *, 0x58) = 0xB4;
    return 1;
}
