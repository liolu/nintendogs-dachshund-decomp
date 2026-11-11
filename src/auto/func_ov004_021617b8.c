/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_ov004_02161810(M2C_UNK);
void func_ov004_02161b6c(M2C_UNK);

void func_ov004_021617b8(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {
        case 0:
            return;
        case 2:
            func_ov004_02161b6c(arg0);
            return;
        case 3:
            func_ov004_02161810(arg0);
            return;
    }
}
