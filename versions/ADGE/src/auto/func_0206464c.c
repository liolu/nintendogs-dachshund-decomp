/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02063db4(void);
M2C_UNK func_02063dd0(void);
M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);

s32 func_0206464c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_02080c28();
    temp_r0 = func_02063db4();
    if (temp_r0 != 0) {
        func_02080c3c(temp_r5);
        return temp_r0;
    }
    M2C_FIELD((void *) func_02063dd0(), s32 *, 0xBC) = arg0;
    func_02080c3c(temp_r5);
    return 0;
}
