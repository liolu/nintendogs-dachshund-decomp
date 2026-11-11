/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 (*data_0213cd70)(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 (*data_0213cd78)(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020c8aa0(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x268) = data_0213cd70(0x5000, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x270) = data_0213cd78(0xC00, 0, 0);
}
