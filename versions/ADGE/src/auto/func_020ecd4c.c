/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02145614;
extern M2C_UNK data_02145624;

void func_020ecd4c(s32 arg0) {
    func_0207ca98(0x1F, 0, M2C_FIELD(arg0, s32 *, 0xC), 0xE0);
    func_0207ca98(M2C_FIELD(&data_02145614, s32 *, 8), 0, M2C_FIELD(arg0, s32 *, 8), 0x4000);
    func_0207ca98(M2C_FIELD(&data_02145624, s32 *, 8), 0, M2C_FIELD(arg0, s32 *, 0x18), 0x800);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
