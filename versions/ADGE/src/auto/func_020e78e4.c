/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02003c00(M2C_UNK);

extern void *data_02159e70;

void func_020e78e4(s32 arg0) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xB4) == 3) {
        func_02003c00(0x14);
    }
    *(M2C_UNK *) arg0 = 0;
}
