#include "m2c.h"
extern void *data_0215a064;
extern void *data_02159e70;
extern M2C_UNK data_02146fa8;
extern M2C_UNK data_02146fb8;
extern M2C_UNK data_02146fc8;
extern M2C_UNK data_02146fe0;
extern M2C_UNK data_02146f84;
extern M2C_UNK data_02146f40;
extern M2C_UNK data_02146f54;
s16 func_ov006_021600ec(s16);
M2C_UNK func_020e7ec4(M2C_UNK, void *);
void func_020ec2f4(M2C_UNK, M2C_UNK);
void func_020ec328(M2C_UNK, M2C_UNK);
void func_020ec134(M2C_UNK, M2C_UNK);
void func_020ec0d8(M2C_UNK, M2C_UNK);
void func_020d5bb4(void *, s32, s32, s32, s32, s32, s32, s32);
void func_020f1160(void *, s32, void *, s32, s32, s32, s32);
void func_020f0f3c(void *);
void func_020f0ea0(void *);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020f1fbc(void *arg0) {
    s16 t;
    M2C_UNK a;
    M2C_UNK b;
    M2C_UNK c;
    M2C_UNK d;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = M2C_FIELD(data_0215a064, s16 *, 0x64);
    t = M2C_FIELD(data_0215a064, s16 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0xBC) = t;
    M2C_FIELD(arg0, s32 *, 0xC0) = func_ov006_021600ec(t) * 100;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x184) = 0;
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) == 8) {
        func_020ec2f4(0, 0);
        func_020ec328(0, 0);
        func_020ec134(0, 0);
        func_020ec0d8(0, 0);
        return;
    }
    a = func_020e7ec4(0, &data_02146fa8);
    b = func_020e7ec4(0, &data_02146fb8);
    c = func_020e7ec4(0, &data_02146fc8);
    d = func_020e7ec4(0, &data_02146fe0);
    func_020ec2f4(0, a);
    func_020ec328(0, b);
    func_020ec134(0, c);
    func_020ec0d8(0, d);
    func_020d5bb4((s8 *) arg0 + 0x18, 0, 0x18, 2, 2, M2C_FIELD(arg0, s32 *, 0xB8), 0, 0);
    func_020d5bb4((s8 *) arg0 + 0x40, 0, 0x18, 7, 4, M2C_FIELD(arg0, s32 *, 0xBC), 0, 0);
    func_020d5bb4((s8 *) arg0 + 0x68, 0, 0x18, 0xD, 4, M2C_FIELD(arg0, s32 *, 0xC0), 0, 0);
    func_020d5bb4((s8 *) arg0 + 0x90, 0, 0x22, 0x14, 4, M2C_FIELD(arg0, s32 *, 0xC0), 0, 0);
    func_020f1160((s8 *) arg0 + 0xC4, 0, &data_02146f84, 1, 0, -0x40, 0x10);
    func_020f1160((s8 *) arg0 + 0xE4, 0, &data_02146f40, 0, -0x100, 0, 0x10);
    func_020f1160((s8 *) arg0 + 0x104, 0, &data_02146f54, 0x11, 0, 0xC8, 0x10);
    func_020f1160((s8 *) arg0 + 0x124, 0, &data_02146f54, 0x11, 0x28, -0x6E, 0x10);
    func_020f0f3c((s8 *) arg0 + 0xC4);
    func_020f0f3c((s8 *) arg0 + 0xE4);
    func_020f0ea0((s8 *) arg0 + 0x124);
    func_020f0f3c((s8 *) arg0 + 0x104);
    func_020eb9fc(0, 0x2C, 0);
}
