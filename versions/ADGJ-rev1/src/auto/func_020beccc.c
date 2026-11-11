/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02153894;

void func_020beccc(s32 *arg0) {
    *arg0 += 1;
    if ((s32) *arg0 >= 0x10) {
        M2C_FIELD(data_02153894, s32 *, 0x19C) = 1;
    }
}
