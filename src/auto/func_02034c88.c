#include "m2c.h"

extern M2C_UNK data_0213931d;

s32 func_02034c88(void *arg0) {
    s8 temp_r0;

    temp_r0 = *((u8 *) ((s8 *) &data_0213931d + (*M2C_FIELD(arg0, u16 **, 0x9E4) * 0x64)));
    switch (temp_r0) {                              /* irregular */
        case 2:
            return 4;
        case 3:
            return 5;
        default:
            return 0;
    }
}
