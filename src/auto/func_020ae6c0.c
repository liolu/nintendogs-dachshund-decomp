/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a5240(M2C_UNK);                     /* extern */
extern void *data_02153740;

void func_020ae6c0(s32 arg0) {
    func_020a5240(0x17);
    M2C_FIELD(data_02153740, s32 *, 0x9F4) = 2;
    M2C_FIELD(data_02153740, s32 *, 0xA0C) = 0;
    M2C_FIELD(data_02153740, s32 *, 0x9F8) = arg0;
}
