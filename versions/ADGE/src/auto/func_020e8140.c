/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207ddc4(M2C_UNK, M2C_UNK);

extern void *data_02159fe4;

void func_020e8140(void) {
    if (M2C_FIELD(data_02159fe4, s32 *, 0) != 0) {
        return;
    }
    func_0207ddc4(M2C_FIELD(data_02159fe4, s32 *, 4), 0x434E535F);
    M2C_FIELD(data_02159fe4, s32 *, 0) = 1;
}
