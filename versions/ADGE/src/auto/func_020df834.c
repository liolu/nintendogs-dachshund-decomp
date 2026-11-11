/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

void func_020df834(s32 arg0) {
    *(M2C_UNK *) arg0 = (s32) (*(M2C_UNK *) arg0 + 1);
    if ((s32) * (M2C_UNK *) arg0 > 0x10) {
        M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
    }
}
