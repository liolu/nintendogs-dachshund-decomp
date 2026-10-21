#include "m2c.h"
void func_020d054c(s32);
void func_0206cbc4(M2C_UNK, void *, M2C_UNK);
void func_0211d9e0(s32 arg0) {
    volatile u16 pad1;
    volatile u16 pad2;
    volatile u16 pad3;
    volatile u16 pad4;

    pad1 = 0;
    func_0206cbc4(pad1, (void *) arg0, 0x74F8);
    M2C_FIELD(arg0, u16 *, 0) = 0;
    M2C_FIELD(arg0, u16 *, 2) = 0;
    func_020d054c(arg0 + 4);
    pad2 = 0;
    func_0206cbc4(pad2, (void *) (arg0 + 0x860), 0x18B0);
    pad3 = 0;
    func_0206cbc4(pad3, (void *) (arg0 + 0x2110), 0x500);
    M2C_FIELD(arg0, s16 *, 0x2610) = -1;
    M2C_FIELD(arg0, s16 *, 0x2612) = -1;
    pad4 = 0;
    func_0206cbc4(pad4, (void *) (arg0 + 0x2614), 0xA4);
    M2C_FIELD(arg0, s16 *, 0x74F0) = -1;
}
