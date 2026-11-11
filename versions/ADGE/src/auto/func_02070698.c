/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0207d038();                  /* extern */
M2C_UNK func_0207d0bc();         /* extern */

void func_02070698(s32 arg0, void *arg1) {
    void *var_r1;

    var_r1 = func_0207d038(arg0, 0);
    if (var_r1 != NULL) {
    loop_1:
        if ((u32) M2C_FIELD(arg1, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_0207d038(arg0);
            if (var_r1 != NULL) {
                goto loop_1;
            }
        }
    }
    func_0207d0bc(arg0, var_r1, arg1);
    M2C_FIELD(arg1, s32 *, 4) = arg0;
}
