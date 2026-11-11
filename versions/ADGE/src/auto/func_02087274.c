/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207f5fc(M2C_UNK);
M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);
void func_020883c8(M2C_UNK);

void func_02087274(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_02080c28();
    func_020883c8(arg0);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~0xF);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    func_0207f5fc(arg0 + 0x18);
    func_02080c3c(temp_r4);
}
