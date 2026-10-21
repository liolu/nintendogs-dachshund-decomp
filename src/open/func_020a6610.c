#include "m2c.h"
void func_020a72f0(s32);
void func_02036054(void);
s32 func_020c8380(s32);
extern void *data_021555f8;
void func_020a6610(void) {
    s32 var_r0;
    s32 var_r6;

    var_r6 = 0;
 loop_1:
    if ((var_r6 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= var_r6)) {
        var_r0 = 0;
    } else {
        var_r0 = (s32) M2C_FIELD((data_021555f8 + (var_r6 * 4)), void **, 4);
    }
    if (var_r0 != 0) {
        func_020a72f0(var_r0);
    }
    var_r6 = (s32) (s16) (var_r6 + 1);
    if (var_r6 < 7) {
        goto loop_1;
    }
    func_02036054();
    if (func_020c8380(M2C_FIELD(data_021555f8, s32 *, 0x28)) != 0) {
        M2C_FIELD(data_021555f8, s16 *, 0x2C) = 3;
    } else {
        M2C_FIELD(data_021555f8, s16 *, 0x2C) = 0;
    }
    var_r6 = 0;
 loop_2:
    M2C_FIELD((data_021555f8 + (var_r6 * 4)), s32 *, 4) = 0;
    var_r6 = (s32) (s16) (var_r6 + 1);
    if (var_r6 < 7) {
        goto loop_2;
    }
    M2C_FIELD(data_021555f8, s16 *, 0x20) = 0;
}
