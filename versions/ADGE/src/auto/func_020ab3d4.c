/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020bd064(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020ab3d4(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x214);
    if (M2C_FIELD(temp_r0, s32 *, 0x1C) == 0) {
        func_020bd064((s32) temp_r0, 0, arg1);
        return;
    }
    func_020bd064((s32) temp_r0, 3, arg1);
}
