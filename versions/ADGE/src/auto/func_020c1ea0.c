/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020a7de0(M2C_UNK);
void func_020c1ed8(M2C_UNK);

void func_020c1ea0(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x6C) == 1) {
        func_020a7de0(1);
        return;
    }
    func_020c1ed8(arg0);
}
