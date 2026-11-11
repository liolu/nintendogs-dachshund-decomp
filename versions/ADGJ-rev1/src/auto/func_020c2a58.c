/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 (*data_0213b5b8)(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 (*data_0213b5c0)(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020c2a58(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xB0) = data_0213b5b8(0x4A00, 1, 0);
    M2C_FIELD(arg0, s32 *, 0xB8) = data_0213b5c0(0x2C00, 0, 0);
}
