/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02071fd4(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02154eec;

s32 func_020f064c(void) {
    s32 temp_r0;

    temp_r0 = func_02071fd4(&data_02154eec);
    if ((temp_r0 == 4) || (temp_r0 == 5) || (temp_r0 == 0x3E)) {
        return 1;
    }
    return 0;
}
