/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207f4bc(void);
M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);

void func_0207f5c8(s32 arg0) {
    s32 temp_r4;

    temp_r4                      = func_02080c28();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_0207f4bc();
    func_02080c3c(temp_r4);
}
