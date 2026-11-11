/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02007040(void);
void func_02066528(void);
M2C_UNK func_02066568(void);
void func_0207eb80(M2C_UNK, M2C_UNK);
M2C_UNK func_020bf6a8(void);
M2C_UNK func_020bf6c4(void);
void func_020c665c(void);
void func_020c66a8(void);

void func_0210dd5c(void) {
    s32 var_r5;

    if (func_02066568() != 0) {
        var_r5 = 0;
    loop_2:
        if ((var_r5 == 0) && (func_020bf6c4() != 0)) {
            var_r5 = 1;
        }
        if ((var_r5 != 0) && (func_020bf6a8() != 0)) {
            func_02066528();
        }
        func_0207eb80(1, 1);
        goto loop_2;
    }
    func_02007040();
    func_020c665c();
    func_020c66a8();
}
