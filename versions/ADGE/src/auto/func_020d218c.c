/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020d21e4(M2C_UNK);

extern void *data_02159e38;

void func_020d218c(void) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0   = M2C_FIELD(data_02159e38, void **, 0x141C);
    temp_r0_2 = temp_r0 + 4;
    if (M2C_FIELD(temp_r0, s32 *, 4) != 0) {
        return;
    }
    if (M2C_FIELD(temp_r0_2, s32 *, 4) != 0) {
        return;
    }
    func_020d21e4((s32) temp_r0_2);
}
