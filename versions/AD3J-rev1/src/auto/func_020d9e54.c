/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020280e0();                                /* extern */
extern M2C_UNK data_0212db78;

s32 func_020d9e54(void) {
    return *((M2C_UNK *) ((s8 *) &data_0212db78 + (func_020280e0() * 4)));
}
