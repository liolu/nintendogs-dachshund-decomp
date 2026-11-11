/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020e7ec4(M2C_UNK, M2C_UNK);
void func_020ec134(M2C_UNK, M2C_UNK);
void func_020ec2f4(M2C_UNK, M2C_UNK);
void func_020ec328(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02144834;
extern M2C_UNK data_02144848;
extern M2C_UNK data_0214485c;

void func_020da07c(void) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = func_020e7ec4(0, (s32) &data_02144834);
    temp_r5 = func_020e7ec4(0, (s32) &data_02144848);
    temp_r4 = func_020e7ec4(0, (s32) &data_0214485c);
    func_020ec2f4(2, temp_r6);
    func_020ec328(2, temp_r5);
    func_020ec134(2, temp_r4);
}
