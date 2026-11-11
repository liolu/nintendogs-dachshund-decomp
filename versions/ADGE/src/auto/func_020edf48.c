/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ebb0c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020ebe84(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
s32 func_ov005_02162938();                          /* extern */
extern void *data_02159e70;

void func_020edf48(void *arg0) {
    M2C_UNK var_r2;
    s32 temp_r0;
    s32 temp_r0_2;

    if (func_ov005_02162938() != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x4858) = 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18);
    func_020ebe84(0, 1, -0x10, -0x10, temp_r0, temp_r0, 0, 0x1F, 1);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 4);
    var_r2    = 0;
    switch (temp_r0_2) {                            /* irregular */
        case 1:
            break;
        case 0:
        case 2:
            var_r2 = 1;
            break;
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        var_r2 = 2;
        if ((u32) M2C_FIELD(arg0, u16 *, 0x14) < 0x8000U) {
            var_r2 = 1;
        }
    }
    func_020ebb0c(0, 1, var_r2);
}
