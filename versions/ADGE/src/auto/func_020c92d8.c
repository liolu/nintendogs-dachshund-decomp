/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0213cc90;
extern s32 data_02159e20;
extern s32 data_02159e28;

void func_020c92d8(void) {
    data_02159e28                          = 0;
    M2C_FIELD(&data_0213cc90, s32 *, 0x18) = (s32) data_02159e20;
}
