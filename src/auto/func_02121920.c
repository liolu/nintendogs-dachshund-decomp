/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02108160(M2C_UNK);                     /* extern */
s32 func_0211290c(M2C_UNK);                         /* extern */
M2C_UNK func_02118e50(void *);                      /* extern */
M2C_UNK func_02118e5c(void *, M2C_UNK, s32, M2C_UNK); /* extern */

void func_02121920(void *arg0) {
    func_02118e5c(arg0, 4, func_0211290c(-1), 0);
    func_02118e50(arg0);
    func_02108160(1);
    M2C_FIELD(arg0, s32 *, 0x6C) = 1;
}
