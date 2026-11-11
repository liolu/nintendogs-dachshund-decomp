/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern s32 data_02154cb0;
extern s32 data_02154cb4;
extern M2C_UNK data_02154cb8;

s32 func_020e987c(void) {
    if (M2C_FIELD(&data_02154cb8, s32 *, 0x30) != 0) {
        return data_02154cb0;
    }
    return data_02154cb4;
}
