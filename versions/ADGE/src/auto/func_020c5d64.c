/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020801f4(M2C_UNK, M2C_UNK);

extern s32 data_02158ac0;

s32 func_020c5d64(void) {
    func_020801f4(data_02158ac0, 0x280);
    return M2C_FIELD(data_02158ac0, s32 *, 4);
}
