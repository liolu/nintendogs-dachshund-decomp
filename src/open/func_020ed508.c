#include "m2c.h"

M2C_UNK func_020d6240(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *);
void func_020e13f4(void);
s32 func_020e7ec4(M2C_UNK, M2C_UNK *);
M2C_UNK func_020e7f9c(M2C_UNK);
s32 func_020ebe24(M2C_UNK, M2C_UNK);
s32 func_020ebe54(M2C_UNK, M2C_UNK);
M2C_UNK func_020ec0d8(M2C_UNK, s32);
M2C_UNK func_020ec134(M2C_UNK, s32);
M2C_UNK func_020ec2f4(M2C_UNK, s32);
M2C_UNK func_020ec328(M2C_UNK, s32);
M2C_UNK func_020f0ca4(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32);
M2C_UNK func_020f0f3c(void *);
M2C_UNK func_020f11e4(void *, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32, s32);

extern M2C_UNK data_02145e60;
extern M2C_UNK data_02145e64;
extern M2C_UNK data_02145e68;
extern M2C_UNK data_02145ea0;
extern M2C_UNK data_02145eb0;
extern M2C_UNK data_02145ec0;
extern M2C_UNK data_02145ed8;
extern M2C_UNK data_02145eec;
extern M2C_UNK data_02145f00;
extern M2C_UNK data_02145f14;
extern M2C_UNK data_02145f18;
extern void *data_02159e70;

void func_020ed508(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s16 v0;
    s16 v1;
    s16 v2;
    s16 v3;
    s16 v4;
    s16 v5;

    func_020e7f9c(0x2C);
    temp_r4 = func_020e7ec4(0x2C, &data_02145ea0);
    temp_r6 = func_020e7ec4(0x2C, &data_02145eb0);
    temp_r5 = func_020e7ec4(0x2C, &data_02145ec0);
    temp_r7 = func_020e7ec4(0x2C, &data_02145ed8);
    func_020ec2f4(2, temp_r4);
    func_020ec328(2, temp_r6);
    func_020ec134(2, temp_r5);
    func_020ec0d8(2, temp_r7);
    M2C_FIELD(data_02159e70, s32 *, 0xC838) = 3;
    M2C_FIELD(data_02159e70, s32 *, 0xC83C) = 0;
    func_020d6240(0x2C, &data_02145eec, &data_02145f00, &data_02145f14, &data_02145f18);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1CAC) = -1;
    func_020e13f4();
    func_020f0ca4((u8 *) arg0 + 8, 2, 0, 1, 0, 3, 0, 2, 2, 0xA, 0xA);
    func_020f0ca4((u8 *) arg0 + 0x44, 2, 1, 1, 1, 4, 0, 2, 2, 0xA, 0xA);
    func_020f0ca4((u8 *) arg0 + 0x80, 2, 2, 1, 2, 5, 0, 2, 2, 0xA, 0xA);
    v0 = (s16) (func_020ebe54(2, 0) - 0x100);
    v1 = (s16) (func_020ebe54(2, 1) + 0x100);
    v2 = (s16) (func_020ebe54(2, 2) - 0x100);
    v3 = (s16) func_020ebe24(2, 0);
    v4 = (s16) func_020ebe24(2, 1);
    v5 = (s16) func_020ebe24(2, 2);
    func_020f11e4((u8 *) arg0 + 0xBC, 2, &data_02145e68, 0, v0, v3, 0x10);
    func_020f11e4((u8 *) arg0 + 0xDC, 2, &data_02145e64, 1, v1, v4, 0x10);
    func_020f11e4((u8 *) arg0 + 0xFC, 2, &data_02145e60, 2, v2, v5, 0x10);
    func_020f0f3c((u8 *) arg0 + 0xBC);
    func_020f0f3c((u8 *) arg0 + 0xDC);
    func_020f0f3c((u8 *) arg0 + 0xFC);
}
