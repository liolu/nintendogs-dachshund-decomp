/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020e28d4();                            /* extern */
s32 func_020e7ec4(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_020e7f9c(M2C_UNK);                     /* extern */
M2C_UNK func_020ec0d8(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec134(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec2f4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec328(M2C_UNK, s32);                /* extern */
M2C_UNK func_020f0ca4(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_020f0f3c(void *);                      /* extern */
M2C_UNK func_020f11e4(void *, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_02144574;
extern M2C_UNK data_0214457c;
extern M2C_UNK data_02144584;
extern M2C_UNK data_0214458c;
extern M2C_UNK data_02144594;
extern M2C_UNK data_0214461c;
extern M2C_UNK data_0214462c;
extern M2C_UNK data_0214463c;
extern M2C_UNK data_02144658;
extern void *data_02159e70;

void func_020d8c2c(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    M2C_FIELD(arg0, s32 *, 0)     = 0;
    M2C_FIELD(arg0, s32 *, 0x1D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D4) = 0x1000;
    func_020e7f9c(0xD);
    temp_r5   = func_020e7ec4(0xD, &data_0214461c);
    temp_r7   = func_020e7ec4(0xD, &data_0214462c);
    temp_r6   = func_020e7ec4(0xD, &data_0214463c);
    temp_r5_2 = func_020e7ec4(0xD, &data_02144658);
    func_020ec2f4(2, temp_r5);
    func_020ec328(2, temp_r7);
    func_020ec134(2, temp_r6);
    func_020ec0d8(2, temp_r5_2);
    func_020f0ca4(arg0 + 4, 2, 0, 1, 2, 3, 0, 0, 0, 0xA, 5);
    func_020f0ca4(arg0 + 0x40, 2, 1, 1, 4, 5, 0, 0, 0, 0xA, 5);
    func_020f0ca4(arg0 + 0x7C, 2, 2, 1, 6, 7, 0, 0, 0, 0xA, 5);
    func_020f0ca4(arg0 + 0xB8, 2, 3, 1, 8, 9, 0, 0, 0, 0xA, 5);
    func_020f0ca4(arg0 + 0xF4, 2, 4, 1, 0xA, 0xB, 0, 0, 0, 0xA, 5);
    func_020f11e4(arg0 + 0x130, 2, &data_0214457c, 0, 0x80, 0x6B, 0x10);
    func_020f11e4(arg0 + 0x150, 2, &data_02144574, 1, 0x80, 0x6B, 0x10);
    func_020f11e4(arg0 + 0x170, 2, &data_0214458c, 2, 0x80, 0x6B, 0x10);
    func_020f11e4(arg0 + 0x190, 2, &data_02144594, 3, 0x80, 0x6B, 0x10);
    func_020f11e4(arg0 + 0x1B0, 2, &data_02144584, 4, 0x120, 0x95, 0x10);
    func_020f0f3c(arg0 + 0x130);
    func_020f0f3c(arg0 + 0x150);
    func_020f0f3c(arg0 + 0x170);
    func_020f0f3c(arg0 + 0x190);
    func_020f0f3c(arg0 + 0x1B0);
    M2C_FIELD(data_02159e70, s32 *, 0x1CE0) = 6;
    M2C_FIELD(data_02159e70, s32 *, 0x48C0) = 6;
    func_020e28d4();
}
