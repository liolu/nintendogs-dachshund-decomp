/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02022b6c();                            /* extern */
s32 func_02022ddc(void *, s16, u8);                 /* extern */
s32 func_02028714(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_0202c9f0(void *, M2C_UNK);                 /* extern */
void *func_020350fc(void *);                        /* extern */
s32 func_0203535c(void *);                          /* extern */
M2C_UNK func_0203e5ac(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203e5e8(void *, M2C_UNK);             /* extern */
s32 func_ov003_02196338(void *);                    /* extern */

void func_02013f50(void *arg0) {
    s16 temp_r0_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r4;
    s8 temp_r0_3;
    s8 temp_r0_4;
    void *temp_r0;

    func_02022b6c();
    if (M2C_FIELD(arg0, u8 *, 0xA4) != 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        if (func_02022ddc(arg0, M2C_FIELD(arg0, s16 *, 0xF2), M2C_FIELD(arg0, u8 *, 0xA6)) != 0) {
            var_r4 = 1;
        } else {
            var_r4 = 0;
        }
    }
    temp_r0 = func_020350fc(arg0);
    if (temp_r0 != NULL) {
        func_0203e5ac(arg0, 2, 1);
        temp_r0_2 = M2C_FIELD(temp_r0, s16 *, 0x90);
        switch (temp_r0_2) {                        /* irregular */
            case 4:
                temp_r0_3 = M2C_FIELD(arg0, s8 *, 0x8B);
                if (temp_r0_3 != 5) {
                    if (temp_r0_3 != 4) {
                        M2C_FIELD(arg0, s32 *, 0x948) = 1;
                    }
                }
                break;
            case 7:
                temp_r0_4 = M2C_FIELD(arg0, s8 *, 0x8B);
                if ((temp_r0_4 != 5) && (temp_r0_4 != 4)) {
                    M2C_FIELD(arg0, s32 *, 0x948) = 8;
                }
                break;
        }
        var_r0 = func_ov003_02196338(arg0);
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        var_r0_2 = 1;
    } else if (func_02028714(arg0, 0, 0) != 0) {
        var_r0_2 = 1;
    } else if ((var_r4 == 0) && (func_0202c9f0(arg0, 0) != 0)) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0);
}
