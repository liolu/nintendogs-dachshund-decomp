/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020afc00();                            /* extern */
s32 func_020b5024(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_020b50fc(M2C_UNK);                     /* extern */
M2C_UNK func_020b91bc(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9218(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b93d4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9408(M2C_UNK, s32);                /* extern */
M2C_UNK func_020bdd48(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_020bdfe0(void *);                      /* extern */
M2C_UNK func_020be288(void *, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_0213bf28;
extern M2C_UNK data_0213bf30;
extern M2C_UNK data_0213bf38;
extern M2C_UNK data_0213bf40;
extern M2C_UNK data_0213bf48;
extern M2C_UNK data_0213bfd0;
extern M2C_UNK data_0213bfe0;
extern M2C_UNK data_0213bff0;
extern M2C_UNK data_0213c00c;
extern void *data_02153740;

void func_020a65b8(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    M2C_FIELD(arg0, s32 *, 0)     = 0;
    M2C_FIELD(arg0, s32 *, 0x1D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D4) = 0x1000;
    func_020b50fc(0xD);
    temp_r5   = func_020b5024(0xD, &data_0213bfd0);
    temp_r7   = func_020b5024(0xD, &data_0213bfe0);
    temp_r6   = func_020b5024(0xD, &data_0213bff0);
    temp_r5_2 = func_020b5024(0xD, &data_0213c00c);
    func_020b93d4(2, temp_r5);
    func_020b9408(2, temp_r7);
    func_020b9218(2, temp_r6);
    func_020b91bc(2, temp_r5_2);
    func_020bdd48(arg0 + 4, 2, 0, 1, 2, 3, 0, 0, 0, 0xA, 5);
    func_020bdd48(arg0 + 0x40, 2, 1, 1, 4, 5, 0, 0, 0, 0xA, 5);
    func_020bdd48(arg0 + 0x7C, 2, 2, 1, 6, 7, 0, 0, 0, 0xA, 5);
    func_020bdd48(arg0 + 0xB8, 2, 3, 1, 8, 9, 0, 0, 0, 0xA, 5);
    func_020bdd48(arg0 + 0xF4, 2, 4, 1, 0xA, 0xB, 0, 0, 0, 0xA, 5);
    func_020be288(arg0 + 0x130, 2, &data_0213bf30, 0, 0x80, 0x6B, 0x10);
    func_020be288(arg0 + 0x150, 2, &data_0213bf28, 1, 0x80, 0x6B, 0x10);
    func_020be288(arg0 + 0x170, 2, &data_0213bf40, 2, 0x80, 0x6B, 0x10);
    func_020be288(arg0 + 0x190, 2, &data_0213bf48, 3, 0x80, 0x6B, 0x10);
    func_020be288(arg0 + 0x1B0, 2, &data_0213bf38, 4, 0x120, 0x95, 0x10);
    func_020bdfe0(arg0 + 0x130);
    func_020bdfe0(arg0 + 0x150);
    func_020bdfe0(arg0 + 0x170);
    func_020bdfe0(arg0 + 0x190);
    func_020bdfe0(arg0 + 0x1B0);
    M2C_FIELD(data_02153740, s32 *, 0x950)  = 6;
    M2C_FIELD(data_02153740, s32 *, 0x3530) = 6;
    func_020afc00();
}
