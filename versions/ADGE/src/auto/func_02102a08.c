/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020aff08(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020b1d6c(u16, s32);                        /* extern */
extern M2C_UNK func_02102d6c;
extern M2C_UNK func_02102d78;
extern M2C_UNK func_02102d94;
extern M2C_UNK func_02102dc8;

void func_02102a08(void *arg0) {
    func_020aff08(arg0, M2C_FIELD(arg0, s32 *, 0xF8), arg0 + 0xFC, arg0 + 0x108,
                  func_020b1d6c(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)), &func_02102dc8, 0, &func_02102d94,
                  &func_02102d78, &func_02102d6c);
}
