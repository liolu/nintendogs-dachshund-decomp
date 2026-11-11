/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c3508(s32);                         /* extern */
M2C_UNK func_02106990(M2C_UNK);                     /* extern */
extern void *data_02156080;

void func_02106b98(void) {
    func_02106990(0);
    func_020c3508(M2C_FIELD(data_02156080, s32 *, 0x28));
    data_02156080 = NULL;
}
