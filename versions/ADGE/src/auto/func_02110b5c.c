/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020893f8(M2C_UNK);                     /* extern */
M2C_UNK func_02089640(u16);                         /* extern */
s32 func_020d01f8();                                /* extern */
M2C_UNK func_02110bd8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *data_0215a048;
extern u16 *data_0215a04c;

void *func_02110b5c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_r0;

    temp_r0 = func_020038a8(arg0, 0x2C);
    func_02110bd8(temp_r0, arg1, arg2);
    if ((*data_0215a04c == 0xD) && (func_020d01f8() == 0)) {
        func_020893f8(0);
    } else {
        func_02089640(M2C_FIELD(temp_r0, u16 *, 6));
    }
    data_0215a048 = temp_r0;
    return temp_r0;
}
