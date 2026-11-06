/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
M2C_UNK func_02108e48(void *, s32, M2C_UNK);        /* extern */

void func_02108e14(void *arg0, M2C_UNK arg1) {
    func_02108e48(arg0, func_01ffda04(M2C_FIELD(arg0, s16 *, 0x98)), arg1);
}
