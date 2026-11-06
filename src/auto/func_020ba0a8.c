/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207d0e0(M2C_UNK, s32, s32, s32);      /* extern */
extern void *data_02153740;

void func_020ba0a8(void *arg0) {
    if (!(M2C_FIELD(data_02153740, s32 *, 0x34E0) & 0x10000000)) {
        return;
    }
    func_0207d0e0(0x23, M2C_FIELD(data_02153740, s32 *, 0x34B8), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x1C));
    func_0207d0e0(0x1E, 0x1C0, M2C_FIELD(arg0, s32 *, 0x10), 0x40);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
