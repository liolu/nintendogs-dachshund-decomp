/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020286ec(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0202f8a4(M2C_UNK);                     /* extern */
s32 func_020352ec(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02035454(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02035710(M2C_UNK);                     /* extern */
M2C_UNK func_02035e20(M2C_UNK);                     /* extern */
void *func_020360a0();                              /* extern */
M2C_UNK func_0204d224(M2C_UNK, void *);             /* extern */

void func_02045270(M2C_UNK arg0) {
    void *temp_r0;

    temp_r0 = func_020360a0();
    func_0204d224(arg0, temp_r0);
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
