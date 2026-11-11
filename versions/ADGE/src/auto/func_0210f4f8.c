/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003498();                            /* extern */
M2C_UNK func_02006894();                            /* extern */
M2C_UNK func_020075a4();                            /* extern */
M2C_UNK func_02041de0();                            /* extern */
M2C_UNK func_020a5ec8();                            /* extern */
M2C_UNK func_020a6818();                            /* extern */
M2C_UNK func_020c6678();                            /* extern */
M2C_UNK func_020c7740();                            /* extern */
M2C_UNK func_020c81a4();                            /* extern */
M2C_UNK func_020c92d8();                            /* extern */
M2C_UNK func_020cbd60();                            /* extern */
M2C_UNK func_020d08ac();                            /* extern */
M2C_UNK func_020d08c8();                            /* extern */
M2C_UNK func_020d08e8();                            /* extern */
M2C_UNK func_020d0c6c(M2C_UNK, u16, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020d1bc4(M2C_UNK, u16, M2C_UNK);       /* extern */
M2C_UNK func_020d2aa8();                            /* extern */
M2C_UNK func_020d2c10();                            /* extern */
M2C_UNK func_020d56f0();                            /* extern */
M2C_UNK func_020d6578();                            /* extern */
M2C_UNK func_020fad7c();                            /* extern */
M2C_UNK func_020fe41c();                            /* extern */
M2C_UNK func_02106808();                            /* extern */
s32 func_02106ef0();                                /* extern */
s32 func_02106f0c();                                /* extern */
M2C_UNK func_02110b48();                            /* extern */
M2C_UNK func_02113bd4();                            /* extern */
M2C_UNK func_02114cf8();                            /* extern */
M2C_UNK func_0211aed4();                            /* extern */
M2C_UNK func_0211bd78();                            /* extern */
M2C_UNK func_ov004_0216279c();                      /* extern */
M2C_UNK func_ov004_0216ca30();                      /* extern */
s32 func_ov004_0216cadc();                          /* extern */
M2C_UNK func_ov005_02162d4c();                      /* extern */
s32 func_ov005_02162f64();                          /* extern */
M2C_UNK func_ov006_021627a8();                      /* extern */
M2C_UNK func_ov006_02163408();                      /* extern */
extern s32 data_02143c58;
extern s32 data_02159e70;
extern void *data_0215a044;
extern void *data_0215a04c;

void func_0210f4f8(void) {
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r0;

    if (!(M2C_FIELD(data_0215a04c, u16 *, 0) & 0x8000)) {
        func_020c6678();
    }
    func_020fad7c();
    func_020d2c10();
    func_020a5ec8();
    if (M2C_FIELD(data_0215a044, s32 *, 0x14) != 0) {
        func_ov006_02163408();
        func_ov006_021627a8();
    }
    if (data_02143c58 == 0x17) {
        if (func_ov005_02162f64() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_ov005_02162d4c();
    }
    if (data_02143c58 == 0x16) {
        if (func_ov004_0216cadc() != 0) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        func_ov004_0216ca30();
    }
    func_020fe41c();
    func_020a6818();
    func_02114cf8();
    func_02041de0();
    func_020c81a4();
    if (func_02106ef0() != 0) {
        func_02106808();
    }
    func_02110b48();
    if (func_02106f0c() != 0) {
        func_ov004_0216279c();
    }
    if (data_02159e70 != 0) {
        func_020d6578();
    }
    func_0211aed4();
    func_020cbd60();
    func_020c7740();
    temp_r0 = M2C_FIELD(data_0215a04c, u16 *, 0);
    switch (temp_r0) {
        default:
            break;
        case 6:
            func_020d1bc4(0, 0U, 0);
            func_020d08e8();
            func_020d0c6c(0, 0U, 0, 1);
            func_020d08c8();
            break;
        case 7:
            if (M2C_FIELD(M2C_FIELD(data_0215a044, void **, 4), s32 *, 0x18) != 0xC) {
                func_020d1bc4(0, 0U, 0);
                func_020d08e8();
                func_020d0c6c(0, 0U, 0, 1);
                func_020d08c8();
            }
            break;
        case 1:
        case 3:
        case 4:
            if (M2C_FIELD(data_0215a044, s16 *, 0) != 0) {
                func_020d1bc4(0, 0U, 0);
                func_020d1bc4(1, M2C_FIELD(data_0215a04c, u16 *, 0xE), 0);
                func_020d08e8();
                func_020d0c6c(1, M2C_FIELD(data_0215a04c, u16 *, 0xE), 0, 1);
                func_020d0c6c(0, 0U, 0, 1);
                func_020d08c8();
            }
            break;
    }
    func_020d08ac();
    func_020c92d8();
    func_020d56f0();
    func_02113bd4();
    func_0211bd78();
    func_020075a4();
    func_02006894();
    func_02003498();
    data_0215a044 = NULL;
    if (M2C_FIELD(data_0215a04c, u16 *, 2) == 0xFFFF) {
        return;
    }
    func_020d2aa8();
}
