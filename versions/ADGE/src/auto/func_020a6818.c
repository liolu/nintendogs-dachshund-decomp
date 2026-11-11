/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a6610(M2C_UNK);                     /* extern */
M2C_UNK func_020c8af0(s32);                         /* extern */
extern void *data_021555f8;

void func_020a6818(void) {
    func_020a6610(0);
    func_020c8af0(M2C_FIELD(data_021555f8, s32 *, 0x28));
    data_021555f8 = NULL;
}
