/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d5bb4(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_020d6384(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020db0fc(M2C_UNK, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_020db44c(s32, M2C_UNK);                /* extern */
s32 func_020e7ec4(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_020ec0d8(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec134(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec2c0(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec2f4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec328(M2C_UNK, s32);                /* extern */
M2C_UNK func_020f0f3c(void *);                      /* extern */
M2C_UNK func_020f1160(void *, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_02146ca0;
extern M2C_UNK data_02146ca8;
extern M2C_UNK data_02146cd0;
extern M2C_UNK data_02146ce0;
extern M2C_UNK data_02146cf0;
extern M2C_UNK data_02146d00;
extern M2C_UNK data_02146d18;
extern void *data_02159e70;

void func_020f148c(void *arg0) {
    s32 temp_r4;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r7;
    s32 temp_r8;

    M2C_FIELD(arg0, s32 *, 4)     = 0;
    M2C_FIELD(arg0, s32 *, 0)     = 0;
    M2C_FIELD(arg0, s32 *, 0x30)  = 0x63;
    M2C_FIELD(arg0, s32 *, 0x38)  = 0;
    M2C_FIELD(arg0, s32 *, 0x3C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
    temp_r6                       = func_020e7ec4(0, &data_02146cd0);
    temp_r4                       = func_020e7ec4(0, &data_02146ce0);
    temp_r8                       = func_020e7ec4(0, &data_02146cf0);
    temp_r7                       = func_020e7ec4(0, &data_02146d00);
    temp_r6_2                     = func_020e7ec4(0, &data_02146d18);
    func_020ec2f4(0, temp_r6);
    func_020ec328(0, temp_r4);
    func_020ec2c0(0, temp_r8);
    func_020ec134(0, temp_r7);
    func_020ec0d8(0, temp_r6_2);
    func_020d6384(0, 0, 5);
    func_020d5bb4(arg0 + 8, 0, 5, 0, 2, M2C_FIELD(arg0, s32 *, 0x30), 0, 0xC);
    M2C_FIELD(arg0, s32 *, 0x34) = func_020db0fc(1, temp_r7, temp_r4, 4, M2C_FIELD(data_02159e70, s32 *, 0x483C));
    func_020db44c(M2C_FIELD(arg0, s32 *, 0x34), 0);
    func_020f1160(arg0 + 0x40, 0, &data_02146ca8, 0, -0x40, 0, 0x10);
    func_020f1160(arg0 + 0x60, 0, &data_02146ca0, 4, 0, -0x40, 0x10);
    func_020f0f3c(arg0 + 0x40);
    func_020f0f3c(arg0 + 0x60);
}
