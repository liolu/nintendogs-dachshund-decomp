/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c5374(void);
M2C_UNK func_020c5444(void);
M2C_UNK func_020c54a4(void);
void func_020c5698(M2C_UNK);
M2C_UNK func_020c593c(M2C_UNK);

void func_020c5578(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020c54a4();
    if (temp_r0 >= arg0) {
        return;
    }
    if ((s32) (temp_r0 + func_020c5444()) >= arg0) {
        do {

        } while (func_020c593c(0) != 0);
        if (func_020c54a4() >= arg0) {
            return;
        }
        goto block_8;
    }
    func_020c5698(1);
block_8:
    func_020c5374();
    do {
        func_020c593c(1);
    } while (func_020c54a4() < arg0);
}
