/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206a354(M2C_UNK, M2C_UNK);

void func_020d4cd8(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x78) & 1) {
        *(s32 *) 0x04000000 &= ~0xE000;
        *(s32 *) 0x0400001C = 0x01FF0000 & (M2C_FIELD(arg0, s16 *, 0x92) << 0x10);
    }
    if (M2C_FIELD(arg0, u16 *, 0x78) & 2) {
        *(s32 *) 0x04001000 &= ~0xE000;
        *(s32 *) 0x04001010 = 0x01FF0000 & (M2C_FIELD(arg0, s16 *, 0x92) << 0x10);
    }
    if (M2C_FIELD(arg0, s16 *, 0x74) != 0) {
        func_0206a354(0x04000050, (s32) M2C_FIELD(arg0, s16 *, 0x90));
        return;
    }
    func_0206a354(0x04001050, (s32) M2C_FIELD(arg0, s16 *, 0x90));
}
