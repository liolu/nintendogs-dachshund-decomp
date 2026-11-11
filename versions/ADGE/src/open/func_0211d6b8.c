#include "m2c.h"
void func_020d054c(s32);
void func_0206cbc4(M2C_UNK, void *, M2C_UNK);
void func_0211d6b8(s32 arg0) {
    volatile u16 pad1;
    volatile u16 pad2;

    func_020d054c(arg0);
    pad1 = 0;
    func_0206cbc4(pad1, (void *) (arg0 + 0x85C), 0x18B0);
    pad2 = 0;
    func_0206cbc4(pad2, (void *) (arg0 + 0x210C), 0x500);
}
