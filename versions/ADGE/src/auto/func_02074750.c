/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02074794(s32);                         /* extern */
extern M2C_UNK data_02150e58;
extern M2C_UNK data_02150f88;

M2C_UNK *func_02074750(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(&data_02150e58, s32 *, 0xFC) & 0x80;
    if (temp_r0 == 0) {
        func_02074794(temp_r0);
        M2C_FIELD(&data_02150e58, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_02150e58, s32 *, 0xFC) | 0x80);
    }
    return &data_02150f88;
}
