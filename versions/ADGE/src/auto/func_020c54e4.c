/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);

extern u32 data_02156f9c;

s32 func_020c54e4(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02080c28();
    if ((u32) arg0 > (u32) data_02156f9c) {
        if ((u32) (arg0 - data_02156f9c) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) (data_02156f9c - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02080c3c(temp_r0);
    return var_r4;
}
