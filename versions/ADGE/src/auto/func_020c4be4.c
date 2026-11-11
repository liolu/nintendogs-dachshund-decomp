/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b28d8(void);
void func_020b95d0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_021555f8;
extern void *data_0215a064;

void func_020c4be4(s32 arg0) {
    s16 temp_r2;
    s16 temp_r2_2;
    s32 temp_r0;
    void *var_r5;

    temp_r2 = M2C_FIELD(data_0215a064, s16 *, 0x7A);
    if (((s32) temp_r2 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= (s32) temp_r2)) {
        var_r5 = NULL;
    } else {
        var_r5 = M2C_FIELD((data_021555f8 + (temp_r2 * 4)), void **, 4);
    }
    temp_r0 = func_020b28d8();
    if (var_r5 == NULL) {
        return;
    }
    if (temp_r0 == -1) {
        return;
    }
    temp_r2_2 = M2C_FIELD(var_r5, s16 *, 0x98);
    if (temp_r0 != temp_r2_2) {
        return;
    }
    func_020b95d0(arg0, 0x12, (s32) temp_r2_2, 4);
}
