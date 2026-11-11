/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207e40c(M2C_UNK, M2C_UNK);

extern void *data_021538b4;

void func_020b5288(void) {
    if (M2C_FIELD(data_021538b4, s32 *, 0) != 0) {
        return;
    }
    func_0207e40c(M2C_FIELD(data_021538b4, s32 *, 4), 0x434E535F);
    M2C_FIELD(data_021538b4, s32 *, 0) = 1;
}
