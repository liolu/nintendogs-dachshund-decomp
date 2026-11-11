/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201d1e0(void *);                      /* extern */
s32 func_02026fd0();                                /* extern */
void *func_020350fc(void *);                        /* extern */
s32 func_020353bc(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02035978(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203e5ac(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203e5e8(void *, M2C_UNK);             /* extern */
s32 func_ov003_02196338(void *);                    /* extern */
extern M2C_UNK data_02139a24;

void func_020167e0(void *arg0) {
    s16 temp_r0_2;
    s32 var_r0;
    s8 temp_r0_3;
    s8 temp_r0_4;
    void *temp_r0;

    if (func_02026fd0() != 0) {
        M2C_FIELD(&data_02139a24, M2C_UNK(**)(void *), 4)(arg0);
    }
    func_0201d1e0(arg0);
    func_02035978(arg0, 1);
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
        return;
    }
    if (func_020353bc(arg0, 4) == 0) {
        return;
    }
    func_0203e5e8(arg0, 2);
}
