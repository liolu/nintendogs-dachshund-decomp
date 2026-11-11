#include "m2c.h"
M2C_UNK func_020422d8();
M2C_UNK func_0206bab4(s32, M2C_UNK, s32);
M2C_UNK func_0206bb1c(s32, M2C_UNK, s32);
M2C_UNK func_0207cb18();
M2C_UNK func_020a63dc();
M2C_UNK func_020d65a0();
M2C_UNK func_020d6688();
M2C_UNK func_020fe334();
s32 func_02106f0c();
M2C_UNK func_021137b8();
M2C_UNK func_ov004_0215ac8c();
extern M2C_UNK data_0214d758;
extern void *data_0215a044;
extern void *data_0215a058;
void func_0210e6bc(void) {
    void *temp_r2;
    void *temp_r2_2;

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
}
