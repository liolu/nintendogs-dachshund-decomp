/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02003b9c(M2C_UNK);

extern void *data_02153740;

void func_020b4a44(s32 arg0) {
    if (M2C_FIELD(data_02153740, s32 *, 0xB4) == 3) {
        func_02003b9c(0x14);
    }
    *(M2C_UNK *) arg0 = 0;
}
