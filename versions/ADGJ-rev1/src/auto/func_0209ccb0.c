/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02095524(M2C_UNK);
M2C_UNK func_02095610(M2C_UNK);
void func_02095784(M2C_UNK);

void func_0209ccb0(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x2E);
    switch (temp_r1) {                              /* irregular */
        case 1:
            return;
        case 0:
            func_02095610(arg0);
            return;
        case 4:
            if (func_02095524(arg0) == 0) {
                return;
            }
            func_02095784(arg0);
            return;
    }
}
