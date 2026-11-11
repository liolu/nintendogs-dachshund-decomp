#include "engine.h"
#include "m2c.h"

s32 func_0207d4b4(s32 arg0) {
    s32 temp_r1;
    s32 var_r0;
    void *var_r2;

    var_r2 = M2C_FIELD(arg0, void **, 0x24);
    var_r0 = 0;
    if (var_r2 == NULL) {
        return 0;
    }
    do {
        temp_r1 = M2C_FIELD(var_r2, s32 *, 4);
        var_r2  = M2C_FIELD(var_r2, void **, 0xC);
        var_r0 += temp_r1;
    } while (var_r2 != NULL);
    return var_r0;
}
