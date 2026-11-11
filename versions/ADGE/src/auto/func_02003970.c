/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207d3ac(M2C_UNK);
M2C_UNK func_0207d3c0(M2C_UNK);

void func_02003970(s32 arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg2, u16 *, 0) != func_0207d3ac(arg0)) {
        return;
    }
    M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) + func_0207d3c0(arg0));
}
