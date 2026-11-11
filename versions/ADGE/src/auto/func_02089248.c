/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020721a0(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0215422c;

void func_02089248(void) {
    func_020721a0(M2C_FIELD(&data_0215422c, s32 *, 4), (s32) M2C_FIELD(&data_0215422c, s16 *, 0x14));
    M2C_FIELD(&data_0215422c, s16 *, 0x16) = -1;
}
