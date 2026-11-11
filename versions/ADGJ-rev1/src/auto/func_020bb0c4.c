/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b5024(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_020b8c1c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020b8ce8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020b91bc(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9218(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b93d4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9408(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_0213fd94;
extern M2C_UNK data_0213fda8;
extern M2C_UNK data_0213fdbc;
extern M2C_UNK data_0213fdd4;

void func_020bb0c4(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0x1000;
    temp_r5                      = func_020b5024(0x1A, &data_0213fd94);
    temp_r7                      = func_020b5024(0x1A, &data_0213fda8);
    temp_r6                      = func_020b5024(0x1A, &data_0213fdbc);
    temp_r5_2                    = func_020b5024(0x1A, &data_0213fdd4);
    func_020b93d4(0, temp_r5);
    func_020b9408(0, temp_r7);
    func_020b9218(0, temp_r6);
    func_020b91bc(0, temp_r5_2);
    func_020b8c1c(0, 1, 1);
    func_020b8c1c(0, 0, 1);
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, s32 *, 0) = 2;
    func_020b8ce8(0, 0, 2, 2);
    func_020b8c1c(0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0xC) = 0xA;
}
