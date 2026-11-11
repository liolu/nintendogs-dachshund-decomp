/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02028108();                                /* extern */
extern M2C_UNK data_021316ac;

s32 func_020fde4c(void) {
    return *((M2C_UNK *) ((s8 *) &data_021316ac + (func_02028108() * 4)));
}
