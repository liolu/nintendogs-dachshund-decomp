/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);
void func_02027ed0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02027f30(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02091e0c(s32 arg0) {
    s32 temp_r0;
    s32 var_r6;

    var_r6 = 0;
    do {
        temp_r0 = func_01ffdb08(var_r6);
        if (temp_r0 != 0) {
            if (arg0 == 2) {
                func_02027ed0(temp_r0, arg0, 0x12C);
            } else if (arg0 == 5) {
                func_02027f30(temp_r0, arg0, 0x2710);
            }
        }
        var_r6 = (s32) (s16) (var_r6 + 1);
    } while (var_r6 < 3);
}
