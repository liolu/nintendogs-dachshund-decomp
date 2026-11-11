/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214cd9c;
extern M2C_UNK data_0214ce78;
extern M2C_UNK data_0214d758;
extern M2C_UNK data_027c0000;

void func_020033f8(void) {
    u16 temp_r4;

    temp_r4 = *(u16 *) 0x04000006;
    if (M2C_FIELD(&data_0214ce78, M2C_UNK(**)(M2C_UNK *, u16), 0x14) != NULL) {
        M2C_FIELD(&data_0214ce78, M2C_UNK(**)(M2C_UNK *, u16), 0x14)(&data_0214ce78, temp_r4);
    }
    if (M2C_FIELD(&data_0214cd9c, M2C_UNK(**)(M2C_UNK *, u16), 0x14) != NULL) {
        M2C_FIELD(&data_0214cd9c, M2C_UNK(**)(M2C_UNK *, u16), 0x14)(&data_0214cd9c, temp_r4);
    }
    if (M2C_FIELD(&data_0214d758, M2C_UNK(**)(M2C_UNK *, u16), 0x10) != NULL) {
        M2C_FIELD(&data_0214d758, M2C_UNK(**)(M2C_UNK *, u16), 0x10)(&data_0214d758, temp_r4);
    }
    M2C_FIELD(&data_027c0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027c0000, s32 *, 0x3FF8) | 2);
}
