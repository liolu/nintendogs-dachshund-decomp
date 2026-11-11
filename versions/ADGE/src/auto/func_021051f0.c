/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020aff08(void *, s32, M2C_UNK, M2C_UNK, s32, M2C_UNK *, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020b1d6c(u16, s32);                        /* extern */
extern M2C_UNK func_021053ac;
extern M2C_UNK func_021053b8;
extern M2C_UNK func_021053d0;
extern M2C_UNK func_02105568;

void func_021051f0(void *arg0) {
    func_020aff08(arg0, M2C_FIELD(arg0, s32 *, 0xF8), 0, 0,
                  func_020b1d6c(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)), &func_02105568, &func_021053d0, 0,
                  &func_021053b8, &func_021053ac);
}
