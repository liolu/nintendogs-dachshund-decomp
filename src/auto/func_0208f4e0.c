/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_0208f55c(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_020ca9a0();                                /* extern */
M2C_UNK func_020e9d18(M2C_UNK);                     /* extern */
M2C_UNK func_020e9f60(u16);                         /* extern */
extern void *data_02153704;
extern u16 *data_02153708;

void *func_0208f4e0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_r0;

    temp_r0 = func_02003844(arg0, 0x28);
    func_0208f55c(temp_r0, arg1, arg2);
    if ((*data_02153708 == 0xD) && (func_020ca9a0() == 0)) {
        func_020e9d18(0);
    } else {
        func_020e9f60(M2C_FIELD(temp_r0, u16 *, 6));
    }
    data_02153704 = temp_r0;
    return temp_r0;
}
