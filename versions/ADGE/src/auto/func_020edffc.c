/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020e7ec4(M2C_UNK, M2C_UNK);
void func_020ebb0c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ebbdc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ec0d8(M2C_UNK, M2C_UNK);
void func_020ec134(M2C_UNK, M2C_UNK);
void func_020ec2f4(M2C_UNK, M2C_UNK);
void func_020ec328(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02145f84;
extern M2C_UNK data_02145f98;
extern M2C_UNK data_02145fac;
extern M2C_UNK data_02145fc4;

void func_020edffc(s32 arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0x1000;
    temp_r5                      = func_020e7ec4(0x1A, (s32) &data_02145f84);
    temp_r7                      = func_020e7ec4(0x1A, (s32) &data_02145f98);
    temp_r6                      = func_020e7ec4(0x1A, (s32) &data_02145fac);
    temp_r5_2                    = func_020e7ec4(0x1A, (s32) &data_02145fc4);
    func_020ec2f4(0, temp_r5);
    func_020ec328(0, temp_r7);
    func_020ec134(0, temp_r6);
    func_020ec0d8(0, temp_r5_2);
    func_020ebb0c(0, 1, 1);
    func_020ebb0c(0, 0, 1);
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, s32 *, 0) = 2;
    func_020ebbdc(0, 0, 2, 2);
    func_020ebb0c(0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0xC) = 0xA;
}
