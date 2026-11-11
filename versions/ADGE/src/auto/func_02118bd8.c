/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);
void func_02026fb8(M2C_UNK);

void func_02118bd8(void) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = 0;
    do {
        temp_r0 = func_01ffdb08(var_r4);
        if (temp_r0 != 0) {
            func_02026fb8(temp_r0);
        }
        var_r4 = (s32) (s16) (var_r4 + 1);
    } while (var_r4 < 3);
}
