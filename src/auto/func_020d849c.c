/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02003844(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02068380(void *);                      /* extern */
M2C_UNK func_021077f0(void *);                      /* extern */
M2C_UNK func_02107ca4(void *, M2C_UNK);             /* extern */
extern M2C_UNK func_020d8130;
extern M2C_UNK func_020d91e4;
extern M2C_UNK func_020d9324;

void func_020d849c(void *arg0, M2C_UNK arg1) {
    func_02107ca4(arg0, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = &func_020d91e4;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8) = &func_020d8130;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = &func_020d9324;
    M2C_FIELD(arg0, s32 *, 0x214)      = func_02003844(arg1, 2);
    M2C_FIELD(arg0, s32 *, 0xAC)       = 0x6A4;
    func_021077f0(arg0);
    func_02068380(arg0 + 0xC8);
    M2C_FIELD(arg0, s32 *, 0xF8)  = 0xE6A;
    M2C_FIELD(arg0, s32 *, 0x120) = 0xE6A;
    M2C_FIELD(arg0, s32 *, 0x128) = 0xE6A;
    M2C_FIELD(arg0, u16 *, 0x20)  = (u16) (M2C_FIELD(arg0, u16 *, 0x20) | 8);
    M2C_FIELD(arg0, s16 *, 0x84)  = 0;
    M2C_FIELD(arg0, s16 *, 0x86)  = 0;
}
