/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0210fe58(void *, s32, M2C_UNK, M2C_UNK, s32, M2C_UNK *, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_02111cbc(u16, s32);                        /* extern */
extern M2C_UNK func_020e12e0;
extern M2C_UNK func_020e12ec;
extern M2C_UNK func_020e1304;
extern M2C_UNK func_020e149c;

void func_020e1124(void *arg0) {
    func_0210fe58(arg0, M2C_FIELD(arg0, s32 *, 0xF8), 0, 0,
                  func_02111cbc(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)), &func_020e149c, &func_020e1304, 0,
                  &func_020e12ec, &func_020e12e0);
}
