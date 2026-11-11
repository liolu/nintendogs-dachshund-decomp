/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_027c0020;
extern s32 data_02154c2c;
extern s32 data_02154c34;

void func_020c3cd0(void) {
    data_02154c34                          = 0;
    M2C_FIELD(&data_027c0020, s32 *, 0x18) = (s32) data_02154c2c;
}
