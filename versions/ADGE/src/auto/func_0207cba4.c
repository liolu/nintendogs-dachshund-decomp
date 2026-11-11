/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207cf7c(M2C_UNK);
M2C_UNK func_0207cfa8(M2C_UNK, M2C_UNK);

s32 func_0207cba4(s32 arg0) {
    if (func_0207cf7c(arg0) != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 8)   = (u16) func_0207cfa8(arg0, (s32) M2C_FIELD(arg0, u16 *, 8));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) - 1);
    return 1;
}
