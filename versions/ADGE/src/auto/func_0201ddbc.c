/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025538(M2C_UNK);
void func_02026b9c(M2C_UNK);

extern void *data_021555f8;
extern void *data_0215a064;

void func_0201ddbc(s32 arg0) {
    s16 temp_r2;
    void *var_r0;

    M2C_FIELD(arg0, s16 *, 0x152) = 0xC3;
    func_02026b9c(arg0);
    func_02025538(arg0);
    temp_r2 = M2C_FIELD(data_0215a064, s16 *, 0x7A);
    if (((s32) temp_r2 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= (s32) temp_r2)) {
        var_r0 = NULL;
    } else {
        var_r0 = M2C_FIELD((data_021555f8 + (temp_r2 * 4)), void **, 4);
    }
    if (var_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(arg0, s8 *, 0x88) == M2C_FIELD(var_r0, s16 *, 0x98)) {
        M2C_FIELD(arg0, s16 *, 0x156) = 1;
    }
}
