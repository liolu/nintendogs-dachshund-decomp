#include "m2c.h"
s32 func_02048fe4(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02028120(M2C_UNK);
void func_0203e5e8(M2C_UNK, M2C_UNK);
s32 func_02028114(M2C_UNK);
s32 func_02035450(M2C_UNK, M2C_UNK);
s32 func_0203535c(M2C_UNK);
void func_0203e5ac(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0202507c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02039128(M2C_UNK);
void func_02027644(void *, M2C_UNK);
void func_02037130(M2C_UNK, M2C_UNK);
void func_02026b9c(M2C_UNK);
s32 func_02034e44(M2C_UNK);
s32 func_02028714(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_020354a8(M2C_UNK, M2C_UNK);
s32 func_0203560c(M2C_UNK, M2C_UNK);
M2C_UNK func_020358c8(M2C_UNK);
M2C_UNK func_02035fd8(M2C_UNK);
M2C_UNK func_0202f9a0(M2C_UNK);
void *func_02036258(M2C_UNK);
M2C_UNK func_0204cd9c(M2C_UNK, void *);
void func_02048d78(M2C_UNK arg0) {
    s32 local = 0;

    if (func_02048fe4(arg0, &local, 0, 0xB5, 0xB8, 0x29A) != 0) {
        return;
    }
    if (local > (s32) (((s64) func_02028120(arg0) * 0x300C + 0x800) >> 12) + 0xCD0) {
        func_0203e5e8(arg0, 0x299);
        return;
    }
    if (local >= (s32) (((s64) func_02028120(arg0) * 0x1CD4 + 0x800) >> 12) - 0xCD0) {
        return;
    }
    func_0203e5e8(arg0, 0x298);
}
