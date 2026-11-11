/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020e7ec4(M2C_UNK, M2C_UNK);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ec0d8(M2C_UNK, M2C_UNK);
void func_020ec134(M2C_UNK, M2C_UNK);
void func_020ec2f4(M2C_UNK, M2C_UNK);
void func_020ec328(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02144ba8;
extern M2C_UNK data_02144bbc;
extern M2C_UNK data_02144bd4;

void func_020e4214(s32 arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_r6                   = func_020e7ec4(0, (s32) &data_02144ba8);
    temp_r5                   = func_020e7ec4(0, (s32) &data_02144bbc);
    temp_r4                   = func_020e7ec4(0, (s32) &data_02144bd4);
    func_020ec2f4(0, 0);
    func_020ec328(0, temp_r6);
    func_020ec134(0, temp_r5);
    func_020ec0d8(0, temp_r4);
    if (M2C_FIELD(arg0, s32 *, 0) == 1) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    func_020eb9fc(0, 2, var_r2);
    if (M2C_FIELD(arg0, s32 *, 0) == 2) {
        var_r2_2 = 1;
    } else {
        var_r2_2 = 0;
    }
    func_020eb9fc(0, 1, var_r2_2);
    if (M2C_FIELD(arg0, s32 *, 0) == 3) {
        var_r2_3 = 1;
    } else {
        var_r2_3 = 0;
    }
    func_020eb9fc(0, 0, var_r2_3);
    if (M2C_FIELD(arg0, s32 *, 0) == 4) {
        var_r2_4 = 1;
    } else {
        var_r2_4 = 0;
    }
    func_020eb9fc(0, 3, var_r2_4);
    func_020eb9fc(0, 4, 0);
}
