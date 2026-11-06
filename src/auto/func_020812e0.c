/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206e488();                            /* extern */
s32 func_0206e66c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0206e694(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_02153654;
extern M2C_UNK func_0208129c;

void func_020812e0(void) {
    if (data_02153654 != 0) {
        return;
    }
    data_02153654 = 1;
    func_0206e488();
    do {

    } while (func_0206e66c(0xC, 1) == 0);
    func_0206e694(0xC, &func_0208129c);
}
