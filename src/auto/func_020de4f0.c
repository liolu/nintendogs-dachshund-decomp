/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK **func_02003844(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_020deefc(M2C_UNK, void *);             /* extern */
M2C_UNK func_02107ca4(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_02145874;
extern M2C_UNK func_020de904;
extern M2C_UNK func_020dedb0;
extern M2C_UNK func_020deef0;

void func_020de4f0(void *arg0, M2C_UNK arg1) {
    func_02107ca4(arg0, 8);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4)   = &func_020dedb0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8)   = &func_020de904;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0)   = &func_020deef0;
    M2C_FIELD(arg0, M2C_UNK ***, 0x214)  = func_02003844(arg1, 4);
    *M2C_FIELD(arg0, M2C_UNK ***, 0x214) = &data_02145874;
    func_020deefc(4, arg0);
}
