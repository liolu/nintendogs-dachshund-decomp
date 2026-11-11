/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020280f8();                                /* extern */
extern M2C_UNK data_021332dc;

s32 func_0210763c(s32 arg0, void *arg1) {
    if (func_020280f8() > (s32) * ((s16 *) ((s8 *) &data_021332dc + (M2C_FIELD(arg1, s16 *, 0x94) * 2)))) {
        return 1;
    }
    return 0;
}
