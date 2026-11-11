/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003a3c(M2C_UNK (*)(), M2C_UNK *);    /* extern */
M2C_UNK func_02003c2c(M2C_UNK);                     /* extern */
M2C_UNK func_02003d84(M2C_UNK);                     /* extern */
M2C_UNK func_02003e88();                            /* extern */
M2C_UNK func_02003f40();                            /* extern */
M2C_UNK func_020040c8();                            /* extern */
M2C_UNK func_0200410c(M2C_UNK);                     /* extern */
M2C_UNK func_02041fa4();                            /* extern */
M2C_UNK func_0206ceac(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0206cf14(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0207d160();                            /* extern */
M2C_UNK func_0208d1f4();                            /* extern */
M2C_UNK func_0208d3a8();                            /* extern */
M2C_UNK func_0208df50();                            /* extern */
M2C_UNK func_02092048();                            /* extern */
M2C_UNK func_020a3f8c();                            /* extern */
M2C_UNK func_020a4074();                            /* extern */
M2C_UNK func_020da32c();                            /* extern */
s32 func_020e2e40();                                /* extern */
M2C_UNK func_020e9b2c(M2C_UNK);                     /* extern */
M2C_UNK func_020efa80(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020f73d0();                            /* extern */
M2C_UNK func_0210675c();                            /* extern */
M2C_UNK func_ov003_0215880c();                      /* extern */
extern M2C_UNK data_0214b158;
extern void *data_02153700;
extern u16 *data_02153708;
extern void *data_02153714;
extern M2C_UNK func_0208d140;

s32 func_0208cf74(void) {
    s32 temp_r4;
    u16 temp_r1;
    void *temp_r2;
    void *temp_r2_2;
    void *var_r2;

    func_0208d3a8();
    func_020f73d0();
    func_02003d84(0xF);
    var_r2 = M2C_FIELD(data_02153700, void **, 4);
    if (M2C_FIELD(var_r2, s32 *, 0xC) == 0) {
        do {
            func_020040c8();
            func_0208d1f4();
            func_02003f40();
            temp_r2 = M2C_FIELD(data_02153700, void **, 0xC);
            func_0206cf14(M2C_FIELD(temp_r2, s32 *, 4), 0, M2C_FIELD(temp_r2, u16 *, 0) * 8);
            temp_r2_2 = M2C_FIELD(data_02153700, void **, 0x10);
            func_0206ceac(M2C_FIELD(temp_r2_2, s32 *, 4), 0, M2C_FIELD(temp_r2_2, u16 *, 0) * 8);
            func_020a4074();
            if (M2C_FIELD(&data_0214b158, M2C_UNK(**)(M2C_UNK *), 0x14) != NULL) {
                M2C_FIELD(&data_0214b158, M2C_UNK(**)(M2C_UNK *), 0x14)(&data_0214b158);
            }
            if (func_020e2e40() != 0) {
                func_ov003_0215880c();
            }
            func_0210675c();
            func_020da32c();
            func_0207d160();
            func_02041fa4();
            if (M2C_FIELD(data_02153714, u16 *, 4) & 1) {
                func_02092048();
            }
            func_020a3f8c();
            func_02003e88();
            var_r2 = M2C_FIELD(data_02153700, void **, 4);
        } while (M2C_FIELD(var_r2, s32 *, 0xC) == 0);
    }
    temp_r4 = M2C_FIELD(var_r2, s32 *, 0x18);
    if (*data_02153708 == 0x8003) {
        func_02003c2c(0x5A);
        func_020e9b2c(0x5A);
    } else {
        func_02003c2c(0x1E);
        func_020e9b2c(0x1E);
    }
    temp_r1 = *data_02153708;
    if ((s32) temp_r1 <= 0x8003) {
        if ((s32) temp_r1 < 0x8003) {
            if (((s32) temp_r1 <= 3) && ((s32) temp_r1 >= 1)) {
                if ((temp_r1 != 1) && (temp_r1 != 3)) {

                } else {
                    goto block_20;
                }
            }
        } else {
            goto block_20;
        }
    } else if (temp_r1 == 0xC002) {
    block_20:
        func_020efa80(0, 0x3C);
    }
    func_02003a3c(func_0208d1f4, &func_0208d140);
    func_0200410c(0xA);
    func_0208df50();
    return temp_r4;
}
