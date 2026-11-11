/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK _u32_div_f(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0215549c;

void func_020f7da8(s32 arg0) {
    M2C_FIELD(&data_0215549c, s32 *, 0xC) = _u32_div_f(0x01FF61FE, arg0);
}
