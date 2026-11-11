/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020e7ec4(M2C_UNK, M2C_UNK);
void func_020eb428(void);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ebbdc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020ec0d8(M2C_UNK, M2C_UNK);
void func_020ec134(M2C_UNK, M2C_UNK);
void func_020ec2f4(M2C_UNK, M2C_UNK);
void func_020ec328(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214758c;
extern M2C_UNK data_0214759c;
extern M2C_UNK data_021475b0;

void func_020f4070(s32 arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_r6                   = func_020e7ec4(0, (s32) &data_0214758c);
    temp_r5                   = func_020e7ec4(0, (s32) &data_0214759c);
    temp_r4                   = func_020e7ec4(0, (s32) &data_021475b0);
    func_020ec2f4(0, 0);
    func_020ec328(0, temp_r6);
    func_020ec134(0, temp_r5);
    func_020ec0d8(0, temp_r4);
    func_020eb9fc(0, 1, 1);
    func_020eb9fc(0, 0, 0);
    func_020eb428();
    func_020ebbdc(0, 1, -0x100, 0);
}
