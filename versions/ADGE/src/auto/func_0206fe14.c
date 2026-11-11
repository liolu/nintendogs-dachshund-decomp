/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206cd2c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0206cdc0(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_02070054(void *);                      /* extern */
void *func_02070064();                              /* extern */
s32 func_02080c28();                                /* extern */
M2C_UNK func_02080c3c(s32);                         /* extern */

s32 func_0206fe14(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 arg5) {
    s32 temp_r4;
    void *var_r0;
    void *var_r1;

    temp_r4 = func_02080c28();
    if (func_02070064() == NULL) {
        func_02070054(arg0);
    } else {
        var_r0 = func_02070064();
        var_r1 = M2C_FIELD(var_r0, void **, 0x28);
        if (var_r1 != NULL) {
            do {
                var_r0 = var_r1;
                var_r1 = M2C_FIELD(var_r1, void **, 0x28);
            } while (var_r1 != NULL);
        }
        M2C_FIELD(var_r0, void **, 0x28) = arg0;
    }
    if (arg3 == 0) {
        M2C_FIELD(arg0, s16 *, 0x32) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x2C) = arg3;
        M2C_FIELD(arg0, s16 *, 0x32) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = arg4;
    M2C_FIELD(arg0, u16 *, 0x30) = arg5;
    if (arg2 != 0) {
        func_0206cdc0(arg2, arg0 + 8, 0x20);
    } else {
        func_0206cd2c(arg0 + 8, 0, 0x20);
    }
    func_02080c3c(temp_r4);
    return 1;
}
