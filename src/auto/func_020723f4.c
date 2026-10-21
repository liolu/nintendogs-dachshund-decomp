/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020716d8(s32);                         /* extern */
M2C_UNK func_0207d698(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_0214fbbc;

void func_020723f4(void *arg0) {
    func_020716d8(M2C_FIELD(arg0, s32 *, 0x40));
    func_0207d698(&data_0214fbbc, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
