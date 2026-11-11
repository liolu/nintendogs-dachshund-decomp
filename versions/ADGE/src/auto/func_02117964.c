/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02114304(M2C_UNK);

void func_02117964(s32 arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x7C) == -1) {
        return;
    }
    if (M2C_FIELD(arg0, s16 *, 0x76) == 0) {
        M2C_FIELD(arg0, s16 *, 0x76) = 1;
        return;
    }
    func_02114304(arg0);
}
