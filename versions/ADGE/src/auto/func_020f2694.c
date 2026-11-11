/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020e7ec4(M2C_UNK, M2C_UNK);
void func_020eb9fc(s32, s32, s32);
void func_020ec0d8(s32, s32);
void func_020ec134(M2C_UNK, M2C_UNK);
void func_020ec2f4(s32, s32);
void func_020ec328(M2C_UNK, M2C_UNK);
void func_020f0ca4(s32, s32, s32, s32, u16, u16, s32, s16, s16, s16, s16);
void func_020f27c4(void);

extern M2C_UNK data_02147174;
extern M2C_UNK data_02147188;
extern M2C_UNK data_0214719c;
extern M2C_UNK data_021471b0;

void func_020f2694(s32 arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    temp_r5                      = func_020e7ec4(9, (s32) &data_02147174);
    temp_r7                      = func_020e7ec4(9, (s32) &data_02147188);
    temp_r6                      = func_020e7ec4(9, (s32) &data_0214719c);
    temp_r5_2                    = func_020e7ec4(9, (s32) &data_021471b0);
    func_020ec2f4(0, temp_r5);
    func_020ec328(0, temp_r7);
    func_020ec134(0, temp_r6);
    func_020ec0d8(0, temp_r5_2);
    func_020f0ca4(arg0 + 8, 2, 0xFFFF, 0, 0U, 0U, 0, 0, 0, 0xA, 0xA);
    M2C_FIELD(arg0, void (**)(), 0x34) = func_020f27c4;
    func_020eb9fc(0, 0, 0);
    func_020eb9fc(0, 3, 0);
    func_020eb9fc(0, 1, 0);
    func_020eb9fc(0, 2, 0);
}
