/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02070efc(M2C_UNK);

extern M2C_UNK data_02154300;
extern M2C_UNK data_02154308;
extern M2C_UNK data_0215430c;

void func_0208c130(void) {
    func_02070efc((s32) &data_02154308);
    func_02070efc((s32) &data_0215430c);
    M2C_FIELD(&data_02154300, s16 *, 0)    = -1;
    M2C_FIELD(&data_02154300, s16 *, 2)    = 0;
    M2C_FIELD(&data_02154300, s16 *, 4)    = -1;
    M2C_FIELD(&data_02154300, s16 *, 6)    = -1;
    M2C_FIELD(&data_02154300, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02154300, s32 *, 0x14) = 0;
    M2C_FIELD(&data_02154300, s32 *, 0x18) = 0;
    M2C_FIELD(&data_02154300, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_02154300, s32 *, 0x24) = 0;
    M2C_FIELD(&data_02154300, s32 *, 0x28) = 0;
    M2C_FIELD(&data_02154300, s32 *, 0x2C) = 0;
}
