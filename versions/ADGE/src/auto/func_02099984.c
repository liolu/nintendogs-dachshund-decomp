/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207fdcc(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02154f2c;

s32 func_02099984(void) {
    s32 sp0;

    func_0207fdcc((s32) &data_02154f2c, (s32) &sp0, 0);
    if ((sp0 & ~0xFF000000) == 0x46494E) {
        return sp0 & 0xF0000000;
    }
    return 0;
}
