/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d7880(M2C_UNK);                     /* extern */
extern void *data_02159e70;

void func_020e1328(s32 arg0) {
    func_020d7880(0x17);
    M2C_FIELD(data_02159e70, s32 *, 0x1D84) = 2;
    M2C_FIELD(data_02159e70, s32 *, 0x1D9C) = 0;
    M2C_FIELD(data_02159e70, s32 *, 0x1D88) = arg0;
}
