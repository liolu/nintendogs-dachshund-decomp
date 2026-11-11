/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02086410(M2C_UNK);

s32 func_02085fe4(s32 arg0) {
    return (s32) M2C_FIELD((M2C_FIELD(arg0, s32 *, 0xC) + (func_02086410(arg0) * 2)), u8 *, 1);
}
