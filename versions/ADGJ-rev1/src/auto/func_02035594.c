#include "m2c.h"

extern M2C_UNK data_021383b4;

s32 func_02035594(void *arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x9E4);
    if ((s32) M2C_FIELD(temp_r2, s16 *, 0x1C) >
        (s32) (((u16 *) &data_021383b4)[(M2C_FIELD(temp_r2, u8 *, 0x11) - 1)] + 0x3E8)) {
        return 1;
    }
    return 0;
}
