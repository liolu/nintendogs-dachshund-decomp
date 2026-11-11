/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206b74c(s32, s16);                    /* extern */

void func_020cf13c(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x78) & 1) {
        *(s32 *) 0x04000000 &= ~0x800;
        *(s32 *) 0x04000000 &= ~0xE000;
        *(s32 *) 0x0400001C = 0;
    }
    if (M2C_FIELD(arg0, u16 *, 0x78) & 2) {
        *(s32 *) 0x04001000 &= ~0x100;
        *(s32 *) 0x04001000 &= ~0xE000;
        *(s32 *) 0x04001010 = 0;
    }
    if (M2C_FIELD(arg0, s16 *, 0x74) != 0) {
        func_0206b74c(0x04000050, M2C_FIELD(arg0, s16 *, 0x90));
        return;
    }
    func_0206b74c(0x04001050, M2C_FIELD(arg0, s16 *, 0x90));
}
