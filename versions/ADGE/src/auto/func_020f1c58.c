/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020f0fd8(M2C_UNK);

extern void *data_02159e70;

void func_020f1c58(s32 arg0) {
    *(M2C_UNK *) arg0 = 0;
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) != 7) {
        return;
    }
    func_020f0fd8(arg0 + 0xC4);
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) != 7) {
        return;
    }
    func_020eb9fc(0, 0, 0);
}
