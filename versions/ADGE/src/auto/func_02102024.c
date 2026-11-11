/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK **func_020038a8(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_020a7924(void *, M2C_UNK);             /* extern */
M2C_UNK func_02102f2c(M2C_UNK, void *);             /* extern */
extern M2C_UNK data_0214a7a8;
extern M2C_UNK func_02102934;
extern M2C_UNK func_02102de0;
extern M2C_UNK func_02102f20;

void func_02102024(void *arg0, M2C_UNK arg1) {
    func_020a7924(arg0, 0x17);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4)   = &func_02102de0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8)   = &func_02102934;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0)   = &func_02102f20;
    M2C_FIELD(arg0, M2C_UNK ***, 0x214)  = func_020038a8(arg1, 4);
    *M2C_FIELD(arg0, M2C_UNK ***, 0x214) = &data_0214a7a8;
    func_02102f2c(0x13, arg0);
}
