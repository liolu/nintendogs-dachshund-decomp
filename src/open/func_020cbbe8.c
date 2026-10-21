#include "m2c.h"
#include "engine.h"
M2C_UNK func_020cba74(M2C_UNK);
void func_020b777c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02145614[];
s32 func_020cbbe8(s32 arg0) {
    u32 idx = func_020cba74(arg0) & 0xFFFF;
    s32 *tbl = M2C_FIELD(arg0, s32 **, 4);

    return M2C_FIELD(arg0, s32 *, 8) + tbl[idx];
}
