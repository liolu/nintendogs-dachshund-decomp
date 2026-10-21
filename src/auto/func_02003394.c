/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0214a79c;
extern M2C_UNK data_0214a878;
extern M2C_UNK data_0214b158;
extern M2C_UNK data_027c0000;

void func_02003394(void) {
    u16 temp_r4;

    temp_r4 = *(u16 *) 0x04000006;
    if (M2C_FIELD(&data_0214a878, M2C_UNK(**)(M2C_UNK *, u16), 0x14) != NULL) {
        M2C_FIELD(&data_0214a878, M2C_UNK(**)(M2C_UNK *, u16), 0x14)(&data_0214a878, temp_r4);
    }
    if (M2C_FIELD(&data_0214a79c, M2C_UNK(**)(M2C_UNK *, u16), 0x14) != NULL) {
        M2C_FIELD(&data_0214a79c, M2C_UNK(**)(M2C_UNK *, u16), 0x14)(&data_0214a79c, temp_r4);
    }
    if (M2C_FIELD(&data_0214b158, M2C_UNK(**)(M2C_UNK *, u16), 0x10) != NULL) {
        M2C_FIELD(&data_0214b158, M2C_UNK(**)(M2C_UNK *, u16), 0x10)(&data_0214b158, temp_r4);
    }
    M2C_FIELD(&data_027c0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027c0000, s32 *, 0x3FF8) | 2);
}
