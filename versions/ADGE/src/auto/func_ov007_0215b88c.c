/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c0278();                                /* extern */
extern void *data_ov007_0215e7e0;

void func_ov007_0215b88c(void) {
    if (func_020c0278() != 0) {
        M2C_FIELD(data_ov007_0215e7e0, s32 *, 0x28) = 0;
    }
}
