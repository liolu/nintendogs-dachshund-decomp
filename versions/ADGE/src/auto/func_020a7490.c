/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_01ffdfe4(M2C_UNK);

void func_020a7490(s32 arg0) {
    M2C_UNK (*temp_r1)(arg0);

    temp_r1 = M2C_FIELD(arg0, M2C_UNK(**)(), 0x20C);
    if (temp_r1 != NULL) {
        temp_r1(arg0);
    }
    func_01ffdfe4(arg0);
}
