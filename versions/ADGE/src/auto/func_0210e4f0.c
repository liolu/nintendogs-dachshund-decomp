/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003aa0(M2C_UNK (*)(), M2C_UNK *);    /* extern */
M2C_UNK func_02003c90(M2C_UNK);                     /* extern */
M2C_UNK func_02003de8(M2C_UNK);                     /* extern */
M2C_UNK func_02003eec();                            /* extern */
M2C_UNK func_02003fa4();                            /* extern */
M2C_UNK func_0200412c();                            /* extern */
M2C_UNK func_02004170(M2C_UNK);                     /* extern */
M2C_UNK func_020422d8();                            /* extern */
M2C_UNK func_0206bab4(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0206bb1c(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0207cb18();                            /* extern */
M2C_UNK func_0208920c(M2C_UNK);                     /* extern */
M2C_UNK func_0208f250(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02096c3c();                            /* extern */
M2C_UNK func_020a63dc();                            /* extern */
M2C_UNK func_020d65a0();                            /* extern */
M2C_UNK func_020d6688();                            /* extern */
M2C_UNK func_020fe334();                            /* extern */
s32 func_02106f0c();                                /* extern */
M2C_UNK func_0210e770();                            /* extern */
M2C_UNK func_0210e924();                            /* extern */
M2C_UNK func_0210f4f8();                            /* extern */
M2C_UNK func_021137b8();                            /* extern */
M2C_UNK func_ov004_0215ac8c();                      /* extern */
extern M2C_UNK data_0214d758;
extern void *data_0215a044;
extern u16 *data_0215a04c;
extern void *data_0215a058;
extern M2C_UNK func_0210e6bc;

s32 func_0210e4f0(void) {
    s32 temp_r4;
    u16 temp_r1;
    void *temp_r2;
    void *temp_r2_2;
    void *var_r2;

    func_0210e924();
    func_02096c3c();
    func_02003de8(0xF);
    var_r2 = M2C_FIELD(data_0215a044, void **, 4);
    if (M2C_FIELD(var_r2, s32 *, 0xC) == 0) {
        do {
            func_0200412c();
            func_0210e770();
            func_02003fa4();
            temp_r2 = M2C_FIELD(data_0215a044, void **, 0xC);
            func_0206bb1c(M2C_FIELD(temp_r2, s32 *, 4), 0, M2C_FIELD(temp_r2, u16 *, 0) * 8);
            temp_r2_2 = M2C_FIELD(data_0215a044, void **, 0x10);
            func_0206bab4(M2C_FIELD(temp_r2_2, s32 *, 4), 0, M2C_FIELD(temp_r2_2, u16 *, 0) * 8);
            func_020d6688();
            if (M2C_FIELD(&data_0214d758, M2C_UNK(**)(M2C_UNK *), 0x14) != NULL) {
                M2C_FIELD(&data_0214d758, M2C_UNK(**)(M2C_UNK *), 0x14)(&data_0214d758);
            }
            if (func_02106f0c() != 0) {
                func_ov004_0215ac8c();
            }
            func_020a63dc();
            func_020fe334();
            func_0207cb18();
            func_020422d8();
            if (M2C_FIELD(data_0215a058, u16 *, 4) & 1) {
                func_021137b8();
            }
            func_020d65a0();
            func_02003eec();
            var_r2 = M2C_FIELD(data_0215a044, void **, 4);
        } while (M2C_FIELD(var_r2, s32 *, 0xC) == 0);
    }
    temp_r4 = M2C_FIELD(var_r2, s32 *, 0x18);
    if (*data_0215a04c == 0x8003) {
        func_02003c90(0x5A);
        func_0208920c(0x5A);
    } else {
        func_02003c90(0x1E);
        func_0208920c(0x1E);
    }
    temp_r1 = *data_0215a04c;
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
        func_0208f250(0, 0x3C);
    }
    func_02003aa0(func_0210e770, &func_0210e6bc);
    func_02004170(0xA);
    func_0210f4f8();
    return temp_r4;
}
