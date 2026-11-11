/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);

extern s32 data_02156f9c;
extern s32 data_02156fa0;
extern s32 data_02156fb8;

s32 func_020c5538(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02080c28();
    if (data_02156fa0 == 0) {
        var_r4 = data_02156f9c;
    } else {
        var_r4 = data_02156fb8;
    }
    func_02080c3c(temp_r0);
    return var_r4;
}
