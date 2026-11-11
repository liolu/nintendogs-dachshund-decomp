/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c056c();                                /* extern */
extern void *data_ov007_0215e7e0;

void func_ov007_0215b8f4(void) {
    if (func_020c056c() != 0) {
        M2C_FIELD(data_ov007_0215e7e0, s32 *, 0x28) = 1;
    }
}
