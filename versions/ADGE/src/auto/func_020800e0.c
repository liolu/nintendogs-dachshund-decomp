/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207f670(M2C_UNK);
void func_0207ff8c(M2C_UNK, M2C_UNK);
M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);

extern M2C_UNK data_02153e78;

void func_020800e0(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r7;

    temp_r4 = func_02080c28();
    temp_r7 = M2C_FIELD(&data_02153e78, s32 *, 8);
loop_1:
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, s32 *, 4) = temp_r7;
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
        func_0207ff8c(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
    } else {
        M2C_FIELD(temp_r7, s32 *, 0x78) = arg0;
        func_0207f670(arg0);
        M2C_FIELD(temp_r7, s32 *, 0x78) = 0;
        goto loop_1;
    }
    func_02080c3c(temp_r4);
}
