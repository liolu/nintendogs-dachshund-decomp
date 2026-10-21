#include "m2c.h"
extern void func_01ffe32c();
void func_020ca0b4(M2C_UNK, M2C_UNK);
void func_020caa40(s32 arg0, s32 arg1) {
    s32 ptr;
    M2C_FIELD(arg0, u16 *, 0x20) |= 2;
    ptr = M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(ptr, s32 *, 0x18) = (s32) func_01ffe32c;
    func_020ca0b4(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
}
