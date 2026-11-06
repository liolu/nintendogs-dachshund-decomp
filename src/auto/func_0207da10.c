/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0207da10(void *arg0, M2C_UNK (*arg1)(void *, void *, M2C_UNK), M2C_UNK arg2) {
    void *temp_r4;
    void *var_r0;

    var_r0 = M2C_FIELD(arg0, void **, 0x2C);
    if (var_r0 == NULL) {
        return;
    }
    do {
        temp_r4 = M2C_FIELD(var_r0, void **, 0xC);
        arg1(var_r0 + 0x10, arg0, arg2);
        var_r0 = temp_r4;
    } while (temp_r4 != NULL);
}
