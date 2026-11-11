#include "m2c.h"
extern void *data_02159e30;
M2C_UNK func_020cba74(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_020cac38(void *arg0) {
    void *obj;
    u32 idx;
    s32 *tbl;

    obj = M2C_FIELD(data_02159e30, void **, 4);
    idx = func_020cba74((M2C_UNK) obj, (M2C_UNK) ((s8 *) arg0 + 0x514), 0) & 0xFFFF;
    tbl = M2C_FIELD(obj, s32 **, 4);
    return M2C_FIELD(obj, s32 *, 8) + tbl[idx];
}
