#include "m2c.h"
extern s32 *data_0214da84;
s32 func_020361f0(M2C_UNK);
void func_02039128(M2C_UNK);
void func_02027658(M2C_UNK, M2C_UNK);
void func_02027644(M2C_UNK, M2C_UNK);
void func_02037130(M2C_UNK, M2C_UNK);
s32 func_0200f8d0(M2C_UNK);
s32 func_02028714(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020394dc(M2C_UNK);
void func_0203b458(s32);
void func_020450d8(s32 arg0) {
    s32 c;
    s32 t;
    u32 q;
    s32 temp_r0;

    if (*(u16 *) (arg0 + 0xFC) > 0x14) {
        *(s32 *) (arg0 + 0x244) = 0;
        func_0203b458(arg0);
    }
    c = 0;
    if (*(u16 *) (arg0 + 0xFC) > 0x64) {
        t = (*data_0214da84 * 0x10DCD) + 1;
        q = (u16) t * 3;
        *data_0214da84 = t;
        c = (u16) (q >> 0x10) == 0;
    }
    temp_r0 = func_020361f0(arg0);
    if (temp_r0 != 0) {
        func_02039128(arg0);
        func_02027658(temp_r0, arg0 + 0x278);
        func_02027644(temp_r0, arg0 + 0x3B4);
        func_02037130(arg0, 0x300);
    }
    if (func_0200f8d0(arg0) != 0) {
        return;
    }
    if (func_02028714(arg0, 0, 1) != 0) {
        return;
    }
    if (c == 0) {
        return;
    }
    func_020394dc(arg0);
}
