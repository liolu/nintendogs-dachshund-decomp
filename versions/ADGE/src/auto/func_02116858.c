/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);
M2C_UNK func_02026fc8(void);
M2C_UNK func_02026ff0(M2C_UNK);

extern void *data_021555f8;
extern void *data_0215a064;

void func_02116858(s32 arg0) {
    s16 temp_r0_2;
    s16 temp_r2;
    s32 temp_r0;
    s32 var_r5;
    s32 var_r5_2;
    void *var_r0;

    var_r5                       = 0;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
loop_1:
    if ((func_01ffdb08(var_r5) != 0) && (func_02026fc8() != 0)) {
        M2C_FIELD(arg0, s16 *, 0x24) = 1;
        return;
    }
    var_r5 = (s32) (s16) (var_r5 + 1);
    if (var_r5 >= 3) {
        var_r5_2 = 0;
    loop_6:
        temp_r0 = func_01ffdb08(var_r5_2);
        if ((temp_r0 != 0) && (func_02026ff0(temp_r0) != 0)) {
            M2C_FIELD(arg0, s16 *, 0x24) = 2;
            return;
        }
        var_r5_2 = (s32) (s16) (var_r5_2 + 1);
        if (var_r5_2 >= 3) {
            temp_r2 = M2C_FIELD(data_0215a064, s16 *, 0x7A);
            if (((s32) temp_r2 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= (s32) temp_r2)) {
                var_r0 = NULL;
            } else {
                var_r0 = M2C_FIELD((data_021555f8 + (temp_r2 * 4)), void **, 4);
            }
            if (var_r0 == NULL) {
                return;
            }
            temp_r0_2 = M2C_FIELD(var_r0, s16 *, 0x90);
            if ((temp_r0_2 != 2) && (temp_r0_2 != 3)) {
                return;
            }
            M2C_FIELD(arg0, s16 *, 0x24) = 2;
            return;
        }
        goto loop_6;
    }
    goto loop_1;
}
