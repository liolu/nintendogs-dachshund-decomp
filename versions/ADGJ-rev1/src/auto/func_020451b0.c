/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202761c(void *, s32);                 /* extern */
s32 func_020286ec(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0202f8a4(s32);                         /* extern */
s32 func_020352ec(s32, M2C_UNK);                    /* extern */
s32 func_02035454(s32, M2C_UNK);                    /* extern */
M2C_UNK func_02035710(s32);                         /* extern */
M2C_UNK func_02035e20(s32);                         /* extern */
void *func_020360a0();                              /* extern */

void func_020451b0(s32 arg0) {
    void *temp_r0;

    temp_r0 = func_020360a0();
    if (temp_r0 != NULL) {
        func_0202761c(temp_r0, arg0 + 0x3D8);
    }
    func_02035710(arg0);
    if (func_020286ec(arg0, 0, 1) != 0) {
        return;
    }
    if (func_02035454(arg0, 0) != 0) {
        return;
    }
    if (func_020352ec(arg0, 0) != 0) {
        return;
    }
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, s16 *, 0xE8) == 0x2FD)) {
        return;
    }
    func_02035e20(arg0);
    func_0202f8a4(arg0);
}
