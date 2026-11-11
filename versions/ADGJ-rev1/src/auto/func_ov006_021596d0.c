/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0211fe30(M2C_UNK *, M2C_UNK *);            /* extern */
extern void *data_ov006_0215bb60;
extern M2C_UNK func_ov006_02159268;

s32 func_ov006_021596d0(void) {
    M2C_UNK sp0;

    if (M2C_FIELD(data_ov006_0215bb60, s32 *, 0x28) == 1) {
        M2C_FIELD(data_ov006_0215bb60, s32 *, 0x28) = 4;
        if (func_0211fe30(&func_ov006_02159268, &sp0) == 0) {
            return 0;
        }
        M2C_FIELD(data_ov006_0215bb60, s32 *, 0x2C) = 0;
        return 1;
    }
    return 0;
}
