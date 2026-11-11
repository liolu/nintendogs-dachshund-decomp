/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020aff08(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020b1d6c(u16, s32);                        /* extern */
M2C_UNK func_020b26f0(void *, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_020fa440(void *);                      /* extern */
extern M2C_UNK func_020fa510;
extern M2C_UNK func_020fa51c;
extern M2C_UNK func_020fa538;
extern M2C_UNK func_020fa56c;

void func_020fa378(void *arg0) {
    void *temp_r3;

    temp_r3 = *M2C_FIELD(arg0, void ***, 0x214);
    func_020b26f0(arg0, M2C_FIELD(temp_r3, s32 *, 0x48), M2C_FIELD(temp_r3, s32 *, 0x4C), M2C_FIELD(temp_r3, s32 *, 0x50),
                  M2C_FIELD(temp_r3, s32 *, 0x54), M2C_FIELD(temp_r3, s32 *, 0x58), 4);
    func_020fa440(arg0);
    func_020aff08(arg0, M2C_FIELD(arg0, s32 *, 0xF8), arg0 + 0xFC, arg0 + 0x108,
                  func_020b1d6c(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)), &func_020fa56c, 0, &func_020fa538,
                  &func_020fa51c, &func_020fa510);
}
