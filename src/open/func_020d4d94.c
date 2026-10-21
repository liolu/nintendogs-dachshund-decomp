#include "m2c.h"
void func_020d4d94(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x78) & 1) {
        s32 v = -M2C_FIELD(arg0, s16 *, 0x92) << 8;

        *(u16 *) 0x04000040 = 0xFF;
        *(u16 *) 0x04000044 = (v & 0xFF00) | 0xBF;
        *(u32 *) 0x0400001C = 0x01FF0000 & (M2C_FIELD(arg0, s16 *, 0x92) << 0x10);
    }
    if (M2C_FIELD(arg0, u16 *, 0x78) & 2) {
        s32 v = -M2C_FIELD(arg0, s16 *, 0x92) << 8;

        *(u16 *) 0x04001040 = 0xFF;
        *(u16 *) 0x04001044 = (v & 0xFF00) | 0xC0;
        *(u32 *) 0x04001010 = 0x01FF0000 & (M2C_FIELD(arg0, s16 *, 0x92) << 0x10);
    }
    if (M2C_FIELD(arg0, s16 *, 0x74) != 0) {
        func_0206a354(0x04000050, (s32) M2C_FIELD(arg0, s16 *, 0x90));
        return;
    }
    func_0206a354(0x04001050, (s32) M2C_FIELD(arg0, s16 *, 0x90));
}
