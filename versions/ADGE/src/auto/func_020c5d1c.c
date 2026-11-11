/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020801f4(M2C_UNK, M2C_UNK);

extern s32 data_02158ac0;

s32 func_020c5d1c(s32 arg0, s32 arg1) {
    func_020801f4(data_02158ac0, 0x280);
    return (s32) M2C_FIELD(((arg0 * 0x24) + data_02158ac0 + (arg1 * 2)), s16 *, 0x20);
}
