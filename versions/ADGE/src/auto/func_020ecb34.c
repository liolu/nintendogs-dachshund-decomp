/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020ecb90();                            /* extern */

void func_020ecb34(s32 *arg0) {
    func_020ecb90();
    func_020d6068(2, 8, 1);
    *(s32 *) 0x0400101C = 0;
    *(u16 *) 0x0400100E &= ~0x40;
    *(u16 *) 0x0400100E = (*(u16 *) 0x0400100E & ~3) | 1;
    *arg0               = 0;
}
