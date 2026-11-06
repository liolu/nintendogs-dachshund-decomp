#include "m2c.h"

extern M2C_UNK data_021384b0;

s32 func_02035534(void *arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E4), s16 *, 0x24) >
        (s32) (*((u16 *) ((s8 *) &data_021384b0 + (M2C_FIELD(arg0, s8 *, 0xA6) * 2))) + 0xF0)) {
        return 1;
    }
    return 0;
}
