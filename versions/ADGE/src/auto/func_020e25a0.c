/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020f0f3c(M2C_UNK);

extern void *data_02159e70;

void func_020e25a0(void) {
    void *temp_r4;

    temp_r4 = data_02159e70 + 0x5028;
    if (M2C_FIELD(data_02159e70, s32 *, 0x5028) == 0) {
        return;
    }
    func_020f0f3c((s32) (temp_r4 + 0x198));
    func_020f0f3c((s32) (temp_r4 + 0x1B8));
}
