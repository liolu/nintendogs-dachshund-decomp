/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207ca98(M2C_UNK, M2C_UNK, s32, s32);  /* extern */
M2C_UNK func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_020ec500(void *arg0) {
    func_020d6068(0, 4, 1);
    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    *(u16 *) 0x0400000C = (*(u16 *) 0x0400000C & ~3) | M2C_FIELD(arg0, s32 *, 0x20);
    *(u16 *) 0x0400000C &= ~0x40;
    *(u16 *) 0x0400000C = (*(u16 *) 0x0400000C & 0x43) | 0x80C;
    func_0207ca98(6, 0, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 4));
    func_0207ca98(0xF, 0, M2C_FIELD(arg0, s32 *, 0xC), 0x1C0);
    func_0207ca98(0xA, 0, M2C_FIELD(arg0, s32 *, 0x10), 0x800);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
