/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020848ec(M2C_UNK, M2C_UNK);
void func_021077e0(M2C_UNK);

extern s32 *data_02154c9c;

void func_ov004_02161dfc(s32 arg0) {
    s32 temp_r1;
    s32 var_r0;
    s32 var_r2;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x214);
    func_021077e0(arg0);
    temp_r1 = M2C_FIELD(temp_r4, s32 *, 4);
    if (temp_r1 == 0) {
        return;
    }
    if (data_02154c9c != NULL) {
        var_r2 = *data_02154c9c;
    } else {
        var_r2 = 0;
    }
    if (var_r2 == 0) {
        return;
    }
    if (data_02154c9c != NULL) {
        var_r0 = *data_02154c9c;
    } else {
        var_r0 = 0;
    }
    func_020848ec(var_r0, temp_r1);
    M2C_FIELD(temp_r4, s32 *, 4) = 0;
}
