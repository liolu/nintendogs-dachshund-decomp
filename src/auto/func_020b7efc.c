/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0214b158;
extern void *data_02153740;

s32 func_020b7efc(void) {
    if ((M2C_FIELD(data_02153740, s32 *, 0xB4B4) == 0) && (M2C_FIELD(&data_0214b158, u16 *, 4) == 2)) {
        return 1;
    }
    return 0;
}
