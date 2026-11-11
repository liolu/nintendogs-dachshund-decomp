/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);

extern s32 data_0214cd14;

s32 func_02002df0(void) {
    s32 temp_r0;

    temp_r0 = func_02080c28();
    if (data_0214cd14 != 0) {
        func_02080c3c(temp_r0);
        return 0;
    }
    data_0214cd14 = 1;
    func_02080c3c(temp_r0);
    return 1;
}
