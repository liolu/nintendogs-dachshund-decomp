/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02073508(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02154cb8;

void func_020e9b60(void) {
    func_02073508(M2C_FIELD(&data_02154cb8, s32 *, 4), (s32) M2C_FIELD(&data_02154cb8, s16 *, 0x14));
    M2C_FIELD(&data_02154cb8, s16 *, 0x16) = -1;
}
