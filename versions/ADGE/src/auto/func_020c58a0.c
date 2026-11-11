/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207fd10(void);
M2C_UNK func_020c531c(void);
void func_020c5374(void);
M2C_UNK func_020c5444(void);
void func_020c5698(M2C_UNK);
M2C_UNK func_020c593c(M2C_UNK);

s32 func_020c58a0(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_0207fd10() != 0) {
        return 0;
    }
    temp_r0_3 = func_020c531c();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_020c5444() > 0) {
        do {

        } while (func_020c593c(0) != 0);
        temp_r0_2 = func_020c531c();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_020c5698(1);
block_12:
    func_020c5374();
    do {
        func_020c593c(1);
        temp_r0 = func_020c531c();
    } while (temp_r0 == 0);
    return temp_r0;
}
