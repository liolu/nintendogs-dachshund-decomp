/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201d214(void *);                      /* extern */
s32 func_02026fa8();                                /* extern */
void *func_02034f40(void *);                        /* extern */
s32 func_020351a0(void *);                          /* extern */
M2C_UNK func_020357c0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0203e280(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203e2b8(void *, M2C_UNK);             /* extern */
s32 func_ov002_02193e98(void *);                    /* extern */
extern M2C_UNK data_0213830c;

void func_0201916c(void *arg0) {
    s16 temp_r0_2;
    s32 var_r0;
    s8 temp_r0_3;
    s8 temp_r0_4;
    void *temp_r0;

    if (func_02026fa8() != 0) {
        M2C_FIELD(&data_0213830c, M2C_UNK(**)(void *), 4)(arg0);
    }
    func_0201d214(arg0);
    func_020357c0(arg0, 1);
    temp_r0 = func_02034f40(arg0);
    if (temp_r0 != NULL) {
        func_0203e280(arg0, 2, 1);
        temp_r0_2 = M2C_FIELD(temp_r0, s16 *, 0x90);
        switch (temp_r0_2) {                        /* irregular */
            case 4:
                temp_r0_3 = M2C_FIELD(arg0, s8 *, 0xA4);
                if (temp_r0_3 != 5) {
                    if (temp_r0_3 != 4) {
                        M2C_FIELD(arg0, s32 *, 0x188) = 1;
                    }
                }
                break;
            case 7:
                temp_r0_4 = M2C_FIELD(arg0, s8 *, 0xA4);
                if ((temp_r0_4 != 5) && (temp_r0_4 != 4)) {
                    M2C_FIELD(arg0, s32 *, 0x188) = 8;
                }
                break;
        }
        var_r0 = func_ov002_02193e98(arg0);
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        return;
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    func_0203e2b8(arg0, 3);
}
