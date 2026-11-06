/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a3c40(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020a8a64(M2C_UNK, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_020a8ec4();                            /* extern */
M2C_UNK func_020afb3c();                            /* extern */
M2C_UNK func_020b03b4(M2C_UNK);                     /* extern */
M2C_UNK func_020b0444();                            /* extern */
s32 func_020b5024(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_020b50fc(M2C_UNK);                     /* extern */
M2C_UNK func_020b8548();                            /* extern */
M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020b8ce8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_020b9184(M2C_UNK);                         /* extern */
s32 func_020b91a0(M2C_UNK);                         /* extern */
M2C_UNK func_020b91bc(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9218(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b93d4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9408(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_0213c3b4;
extern M2C_UNK data_0213c3c4;
extern M2C_UNK data_0213c3d4;
extern M2C_UNK data_0213c3e8;
extern M2C_UNK data_0213c3f8;
extern M2C_UNK data_0213c408;
extern M2C_UNK data_0213c418;
extern M2C_UNK data_0213c41c;
extern void *data_02153740;

void func_020ae408(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r6;
    s32 temp_r7;

    func_020b50fc(9);
    func_020afb3c();
    temp_r5   = func_020b5024(9, &data_0213c3b4);
    temp_r7   = func_020b5024(9, &data_0213c3c4);
    temp_r6   = func_020b5024(9, &data_0213c3d4);
    temp_r5_2 = func_020b5024(9, &data_0213c3e8);
    func_020b93d4(2, temp_r5);
    func_020b9408(2, temp_r7);
    func_020b9218(2, temp_r6);
    func_020b91bc(2, temp_r5_2);
    func_020b8548();
    func_020b8b0c(2, 3, 1);
    func_020b8b0c(2, 4, 1);
    func_020b8ce8(2, 3, 0, 0);
    func_020b8ce8(2, 4, 0, 0);
    func_020a8ec4();
    temp_r5_3 = func_020b9184(2);
    func_020a8a64(0, temp_r5_3, func_020b91a0(2), 4, 0);
    func_020b0444();
    M2C_FIELD(data_02153740, s32 *, 0xB4A8) = 1;
    M2C_FIELD(data_02153740, s32 *, 0xB4AC) = 1;
    func_020a3c40(9, &data_0213c3f8, &data_0213c408, &data_0213c418, &data_0213c41c);
    func_020b03b4(1);
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s16 *, 8)   = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0xA) = 0;
}
