/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02108160(M2C_UNK);                     /* extern */
M2C_UNK func_02118e50(void *);                      /* extern */
M2C_UNK func_02118e5c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_021218e0(void *arg0) {
    func_02118e5c(arg0, 2, -1, 0);
    func_02118e50(arg0);
    func_02108160(1);
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s16 *, 0x64) = 0;
}
