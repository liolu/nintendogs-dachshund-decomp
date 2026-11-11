/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003434();                            /* extern */
M2C_UNK func_02006830();                            /* extern */
M2C_UNK func_02007540();                            /* extern */
M2C_UNK func_02041aac();                            /* extern */
M2C_UNK func_0208f4cc();                            /* extern */
M2C_UNK func_02092464();                            /* extern */
M2C_UNK func_02093568();                            /* extern */
M2C_UNK func_02099744();                            /* extern */
M2C_UNK func_0209a5e8();                            /* extern */
M2C_UNK func_020a3f64();                            /* extern */
M2C_UNK func_020c114c();                            /* extern */
M2C_UNK func_020c21d8();                            /* extern */
M2C_UNK func_020c2bfc();                            /* extern */
M2C_UNK func_020c3cd4();                            /* extern */
M2C_UNK func_020c66ac();                            /* extern */
M2C_UNK func_020cb054();                            /* extern */
M2C_UNK func_020cb070();                            /* extern */
M2C_UNK func_020cb090();                            /* extern */
M2C_UNK func_020cb414(M2C_UNK, u16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020cc36c(M2C_UNK, u16, M2C_UNK);       /* extern */
M2C_UNK func_020cd21c();                            /* extern */
M2C_UNK func_020cd384();                            /* extern */
M2C_UNK func_020cfe64();                            /* extern */
M2C_UNK func_020d6d8c();                            /* extern */
M2C_UNK func_020da414();                            /* extern */
M2C_UNK func_020e273c();                            /* extern */
s32 func_020e2e24();                                /* extern */
s32 func_020e2e40();                                /* extern */
M2C_UNK func_02106248();                            /* extern */
M2C_UNK func_02106b98();                            /* extern */
M2C_UNK func_ov002_0216a4ac();                      /* extern */
M2C_UNK func_ov003_02160278();                      /* extern */
s32 func_ov003_0216a558();                          /* extern */
M2C_UNK func_ov004_02160b70();                      /* extern */
s32 func_ov004_02160d88();                          /* extern */
M2C_UNK func_ov005_02160324();                      /* extern */
M2C_UNK func_ov005_02160f78();                      /* extern */
extern s32 data_021440d4;
extern void *data_02153700;
extern void *data_02153708;
extern s32 data_02153740;

void func_0208df50(void) {
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r0;

    if (!(M2C_FIELD(data_02153708, u16 *, 0) & 0x8000)) {
        func_020c114c();
    }
    func_020d6d8c();
    func_020cd384();
    func_02106248();
    if (M2C_FIELD(data_02153700, s32 *, 0x14) != 0) {
        func_ov005_02160f78();
        func_ov005_02160324();
    }
    if (data_021440d4 == 0x17) {
        if (func_ov004_02160d88() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_ov004_02160b70();
    }
    if (data_021440d4 == 0x16) {
        if (func_ov003_0216a558() != 0) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        func_ov002_0216a4ac();
    }
    func_020da414();
    func_02106b98();
    func_02093568();
    func_02041aac();
    func_020c2bfc();
    if (func_020e2e24() != 0) {
        func_020e273c();
    }
    func_0208f4cc();
    if (func_020e2e40() != 0) {
        func_ov003_02160278();
    }
    if (data_02153740 != 0) {
        func_020a3f64();
    }
    func_02099744();
    func_020c66ac();
    func_020c21d8();
    temp_r0 = M2C_FIELD(data_02153708, u16 *, 0);
    switch (temp_r0) {
        default:
            break;
        case 6:
            func_020cc36c(0, 0U, 0);
            func_020cb090();
            func_020cb414(0, 0U, 0, 1);
            func_020cb070();
            break;
        case 7:
            if (M2C_FIELD(M2C_FIELD(data_02153700, void **, 4), s32 *, 0x18) != 0xC) {
                func_020cc36c(0, 0U, 0);
                func_020cb090();
                func_020cb414(0, 0U, 0, 1);
                func_020cb070();
            }
            break;
        case 1:
        case 3:
        case 4:
            if (M2C_FIELD(data_02153700, s16 *, 0) != 0) {
                func_020cc36c(0, 0U, 0);
                func_020cc36c(1, M2C_FIELD(data_02153708, u16 *, 0xE), 0);
                func_020cb090();
                func_020cb414(1, M2C_FIELD(data_02153708, u16 *, 0xE), 0, 1);
                func_020cb414(0, 0U, 0, 1);
                func_020cb070();
            }
            break;
    }
    func_020cb054();
    func_020c3cd4();
    func_020cfe64();
    func_02092464();
    func_0209a5e8();
    func_02007540();
    func_02006830();
    func_02003434();
    data_02153700 = NULL;
    if (M2C_FIELD(data_02153708, u16 *, 2) == 0xFFFF) {
        return;
    }
    func_020cd21c();
}
