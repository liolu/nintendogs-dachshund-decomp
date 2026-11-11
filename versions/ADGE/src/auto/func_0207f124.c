/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0206cf00(M2C_UNK, M2C_UNK);
M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);
M2C_UNK func_02080c54(void);
void func_02080c68(M2C_UNK);

s32 func_0207f124(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 var_r5;

    if (arg3 != 0) {
        var_r5 = func_02080c54();
    } else {
        var_r5 = func_02080c28();
    }
    temp_r0 = func_0206cf00(arg0, arg1);
    if (temp_r0 == 0) {
        if (arg2 != 0) {
            ((M2C_UNK(*)()) arg2)();
        }
        M2C_FIELD(arg1, s16 *, 4) = (s16) arg0;
    }
    if (arg3 != 0) {
        func_02080c68(var_r5);
    } else {
        func_02080c3c(var_r5);
    }
    return temp_r0;
}
