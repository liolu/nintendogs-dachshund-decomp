/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b5024(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020b91bc(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9218(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b93d4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020b9408(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_0213c55c;
extern M2C_UNK data_0213c570;
extern M2C_UNK data_0213c588;

void func_020b14f0(void *arg0) {
    M2C_UNK var_r2;
    M2C_UNK var_r2_2;
    M2C_UNK var_r2_3;
    M2C_UNK var_r2_4;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_r6                   = func_020b5024(0, &data_0213c55c);
    temp_r5                   = func_020b5024(0, &data_0213c570);
    temp_r4                   = func_020b5024(0, &data_0213c588);
    func_020b93d4(0, 0);
    func_020b9408(0, temp_r6);
    func_020b9218(0, temp_r5);
    func_020b91bc(0, temp_r4);
    if (M2C_FIELD(arg0, s32 *, 0) == 1) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    func_020b8b0c(0, 2, var_r2);
    if (M2C_FIELD(arg0, s32 *, 0) == 2) {
        var_r2_2 = 1;
    } else {
        var_r2_2 = 0;
    }
    func_020b8b0c(0, 1, var_r2_2);
    if (M2C_FIELD(arg0, s32 *, 0) == 3) {
        var_r2_3 = 1;
    } else {
        var_r2_3 = 0;
    }
    func_020b8b0c(0, 0, var_r2_3);
    if (M2C_FIELD(arg0, s32 *, 0) == 4) {
        var_r2_4 = 1;
    } else {
        var_r2_4 = 0;
    }
    func_020b8b0c(0, 3, var_r2_4);
    func_020b8b0c(0, 4, 0);
}
