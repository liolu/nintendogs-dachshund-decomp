/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207d0e0(M2C_UNK, s32, s32, s32);      /* extern */
extern void *data_02153740;

void func_020b9580(void *arg0) {
    if (!(M2C_FIELD(data_02153740, s32 *, 0x34E0) & 0x40000000)) {
        return;
    }
    func_0207d0e0(0x13, M2C_FIELD(data_02153740, s32 *, 0x34B0), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x1C));
    func_0207d0e0(0xE, 0x1C0, M2C_FIELD(arg0, s32 *, 0x10), 0x40);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
