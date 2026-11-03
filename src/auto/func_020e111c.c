/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0210fe50(void *, s32, M2C_UNK, M2C_UNK, s32, M2C_UNK *, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_02111cb4(u16, s32);                        /* extern */
extern M2C_UNK func_020e12d8;
extern M2C_UNK func_020e12e4;
extern M2C_UNK func_020e12fc;
extern M2C_UNK func_020e1494;

void func_020e111c(void *arg0) {
    func_0210fe50(arg0, M2C_FIELD(arg0, s32 *, 0xF8), 0, 0,
                  func_02111cb4(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)), &func_020e1494, &func_020e12fc, 0,
                  &func_020e12e4, &func_020e12d8);
}
