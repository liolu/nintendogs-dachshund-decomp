/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0210fe58(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_02111cbc(u16, s32);                        /* extern */
extern M2C_UNK func_020d7db4;
extern M2C_UNK func_020d7e2c;
extern M2C_UNK func_020d7e44;
extern M2C_UNK func_020d7e70;

void func_020d7bcc(void *arg0) {
    func_0210fe58(arg0, M2C_FIELD(arg0, s32 *, 0xF8), arg0 + 0xFC, arg0 + 0x108,
                  func_02111cbc(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)), &func_020d7e70, 0, &func_020d7e44,
                  &func_020d7e2c, &func_020d7db4);
}
