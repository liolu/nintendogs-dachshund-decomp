/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020036b4(s32);                         /* extern */
extern void *data_02154c9c;

void func_020d6d8c(void) {
    func_020036b4(M2C_FIELD(data_02154c9c, s32 *, 8));
    data_02154c9c = NULL;
}
