/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020dca68(M2C_UNK);

extern void *data_02159e70;

void func_020e2890(void) {
    func_020dca68((s32) (data_02159e70 + 0x5028));
    M2C_FIELD(data_02159e70, s32 *, 0x48B8) = 0;
}
