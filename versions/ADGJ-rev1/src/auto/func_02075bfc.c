/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020686f4(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_02150330;
extern M2C_UNK data_0215037c;
extern M2C_UNK data_02150430;

M2C_UNK *func_02075bfc(void) {
    if (!(M2C_FIELD(&data_02150330, s32 *, 0xFC) & 8)) {
        func_020686f4(&data_0215037c, &data_02150430);
        M2C_FIELD(&data_02150330, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_02150330, s32 *, 0xFC) | 8);
    }
    return &data_02150430;
}
