#include "engine.h"
#include "m2c.h"

void func_02088380(s32 arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r2;
    void **temp_r2;
    void *temp_r3;

    var_r1  = arg1;
    temp_r3 = M2C_FIELD(arg0, void **, 0);
    temp_r2 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, void ***, 4) = temp_r2;
    }
    if (temp_r2 != NULL) {
        *temp_r2 = temp_r3;
    }
    var_r2 = M2C_FIELD(var_r1, s32 *, 4);
    if (var_r2 != 0) {
        do {
            var_r1 = var_r2;
            var_r2 = M2C_FIELD(var_r2, s32 *, 4);
        } while (var_r2 != 0);
    }
    M2C_FIELD(var_r1, s32 *, 4)  = arg0;
    M2C_FIELD(arg0, void **, 0)  = (void *) var_r1;
    M2C_FIELD(arg0, void ***, 4) = NULL;
}
