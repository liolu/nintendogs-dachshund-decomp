/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0207fc98();                                /* extern */
M2C_UNK func_020802d0(M2C_UNK, s32);                /* extern */
M2C_UNK func_020802e4(M2C_UNK, s32);                /* extern */
s32 func_020802f8(M2C_UNK);                         /* extern */
s32 func_020803e0(M2C_UNK);                         /* extern */
M2C_UNK func_02080714(s32);                         /* extern */
M2C_UNK func_0208071c(s32);                         /* extern */
extern s32 data_021540c0;

void func_02080534(void) {
    func_020802e4(2, func_020803e0(2));
    func_020802d0(2, func_020802f8(2));
    if ((data_021540c0 != 0) && (*(u16 *) 0x027FFC40 != 2) && ((func_0207fc98() & 3) != 1)) {
        return;
    }
    func_02080714(0x0200002B);
    func_0208071c(0x023E0021);
}
