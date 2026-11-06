/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a5240(M2C_UNK);                     /* extern */
extern void *data_02153740;

void func_020ae9b0(s32 arg0) {
    func_020a5240(0x1F);
    M2C_FIELD(data_02153740, s32 *, 0xA40) = arg0;
}
