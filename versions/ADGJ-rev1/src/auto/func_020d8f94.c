/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0210fe58(void *, s32, M2C_UNK, M2C_UNK, s32, M2C_UNK *, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_02111cbc(u16, s32);                        /* extern */
extern M2C_UNK func_020d9150;
extern M2C_UNK func_020d915c;
extern M2C_UNK func_020d9170;
extern M2C_UNK func_020d91d4;

void func_020d8f94(void *arg0) {
    func_0210fe58(arg0, M2C_FIELD(arg0, s32 *, 0xF8), 0, 0,
                  func_02111cbc(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)), &func_020d91d4, &func_020d9170, 0,
                  &func_020d915c, &func_020d9150);
}
