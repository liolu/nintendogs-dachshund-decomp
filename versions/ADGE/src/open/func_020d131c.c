#include "m2c.h"
extern s32 data_02159e38;
extern void func_020d135c(M2C_UNK);
void func_020d131c(s32 arg0) {
    s8 *p = (s8 *) func_020038a8((s32 *) arg0, 0x15D4);

    M2C_FIELD(p, s32 *, 0) = 0;
    M2C_FIELD(p, u16 *, 4) = 0;
    M2C_FIELD(p, u16 *, 6) = 0;
    M2C_FIELD(p, u16 *, 8) = 0;
    func_020d135c((M2C_UNK) p);
    data_02159e38 = (s32) p;
}
