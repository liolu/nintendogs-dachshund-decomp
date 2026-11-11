/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020e3e2c(M2C_UNK);

extern void *data_02159e70;

void func_020f0340(s32 arg0) {
    *(M2C_UNK *) arg0 = 0;
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) != 3) {
        return;
    }
    func_020e3e2c(8);
}
