/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0207d038();            /* extern */
M2C_UNK func_0207d0bc();   /* extern */
extern M2C_UNK data_0214fe18;

void func_02070638(void *arg0) {
    void *var_r1;

    var_r1 = func_0207d038(&data_0214fe18, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_0207d038(&data_0214fe18);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_0207d0bc(&data_0214fe18, var_r1, arg0);
}
