/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020d19c4(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020d28d8(M2C_UNK);

void func_020d087c(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = (void *) func_020d28d8(arg0);
    if (M2C_FIELD(temp_r0, s32 *, 0x10) == 0) {
        return;
    }
    func_020d19c4((s32) temp_r0, arg2, 1);
}
