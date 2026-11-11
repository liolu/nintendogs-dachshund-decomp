/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
s32 func_02026fa0();                                /* extern */
s32 func_02026fc8();                                /* extern */
extern void *data_02153720;
extern void *data_02156080;

void func_020950c8(void *arg0) {
    s16 temp_r0;
    s16 temp_r2;
    s16 var_r5;
    s16 var_r5_2;
    void *var_r0;

    var_r5                       = 0;
    M2C_FIELD(arg0, s16 *, 0x24) = 0;
loop_1:
    if ((func_01ffda04(var_r5) != 0) && (func_02026fa0() != 0)) {
        M2C_FIELD(arg0, s16 *, 0x24) = 1;
        return;
    }
    var_r5 += 1;
    if ((s32) var_r5 >= 3) {
        var_r5_2 = 0;
    loop_6:
        if ((func_01ffda04(var_r5_2) != 0) && (func_02026fc8() != 0)) {
            M2C_FIELD(arg0, s16 *, 0x24) = 2;
            return;
        }
        var_r5_2 += 1;
        if ((s32) var_r5_2 >= 3) {
            temp_r2 = M2C_FIELD(data_02153720, s16 *, 0x7A);
            if (((s32) temp_r2 < 0) || ((s32) M2C_FIELD(data_02156080, s16 *, 0x20) <= (s32) temp_r2)) {
                var_r0 = NULL;
            } else {
                var_r0 = M2C_FIELD((data_02156080 + (temp_r2 * 4)), void **, 4);
            }
            if (var_r0 == NULL) {
                return;
            }
            temp_r0 = M2C_FIELD(var_r0, s16 *, 0x90);
            if ((temp_r0 != 2) && (temp_r0 != 3)) {
                return;
            }
            M2C_FIELD(arg0, s16 *, 0x24) = 2;
            return;
        }
        goto loop_6;
    }
    goto loop_1;
}
