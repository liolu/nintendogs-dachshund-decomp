#include "m2c.h"
extern void *data_02159e30;
M2C_UNK func_020cba74(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_020cabcc(s32 arg0, s32 arg1) {
    s32 sel;
    s32 mode;
    void *obj;
    u32 idx;
    s32 *tbl;

    sel = 0;
    mode = 0;
    if (arg0 != 0) {
        if (arg0 == 1) {
            sel = 1;
        }
    }
    if ((u32) arg1 <= 2) {
        mode = arg1;
    }
    obj = M2C_FIELD(data_02159e30, void **, 4);
    idx = func_020cba74((M2C_UNK) obj, (M2C_UNK) ((s8 *) sel + 0x546), (M2C_UNK) mode) & 0xFFFF;
    tbl = M2C_FIELD(obj, s32 **, 4);
    return M2C_FIELD(obj, s32 *, 8) + tbl[idx];
}
