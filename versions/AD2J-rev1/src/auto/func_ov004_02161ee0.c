/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_ov004_02161f38(M2C_UNK);
void func_ov004_02162500(M2C_UNK);

void func_ov004_02161ee0(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {
        case 0:
            return;
        case 2:
            func_ov004_02162500(arg0);
            return;
        case 3:
            func_ov004_02161f38(arg0);
            return;
    }
}
