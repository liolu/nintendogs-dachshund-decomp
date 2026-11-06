/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02073508(s32, s16);                    /* extern */
extern M2C_UNK data_02154cb8;

void func_020e9b68(void) {
    func_02073508(M2C_FIELD(&data_02154cb8, s32 *, 4), M2C_FIELD(&data_02154cb8, s16 *, 0x14));
    M2C_FIELD(&data_02154cb8, s16 *, 0x16) = -1;
}
