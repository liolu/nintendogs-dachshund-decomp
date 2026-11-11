/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c0410();                                /* extern */
extern void *data_02155660;

void func_020be920(void) {
    if (func_020c0410() != 0) {
        M2C_FIELD(data_02155660, s32 *, 0x20) = 1;
    }
}
