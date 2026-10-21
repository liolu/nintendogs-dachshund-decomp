/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206e66c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0206e694(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02080358();                                /* extern */
M2C_UNK func_0208127c(M2C_UNK);                     /* extern */
extern M2C_UNK func_02063cbc;

void func_02063c50(void) {
    func_0206e694(7, &func_02063cbc);
    if (func_02080358() != 0) {
        return;
    }
    if (func_0206e66c(7, 1) != 0) {
        return;
    }
    do {
        func_0208127c(0x64);
    } while (func_0206e66c(7, 1) == 0);
}
