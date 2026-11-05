/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020280e0();                                /* extern */
extern M2C_UNK data_0212db80;

s32 func_020d9e5c(void) {
    return *((M2C_UNK *) ((s8 *) &data_0212db80 + (func_020280e0() * 4)));
}
