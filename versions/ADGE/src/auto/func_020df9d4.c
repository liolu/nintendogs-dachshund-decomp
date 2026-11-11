/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d6240(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020e7ec4(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_020ec0d8(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec134(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec2f4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec328(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_02144924;
extern M2C_UNK data_02144934;
extern M2C_UNK data_02144944;
extern M2C_UNK data_02144958;
extern M2C_UNK data_02144968;
extern M2C_UNK data_02144978;
extern M2C_UNK data_02144988;
extern M2C_UNK data_0214498c;
extern void *data_02159e70;

void func_020df9d4(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    M2C_FIELD(data_02159e70, s32 *, 0x483C) = 0;
    temp_r5                                 = func_020e7ec4(0, &data_02144924);
    temp_r7                                 = func_020e7ec4(0, &data_02144934);
    temp_r6                                 = func_020e7ec4(0, &data_02144944);
    temp_r5_2                               = func_020e7ec4(0, &data_02144958);
    func_020ec2f4(0, temp_r5);
    func_020ec328(0, temp_r7);
    func_020ec134(0, temp_r6);
    func_020ec0d8(0, temp_r5_2);
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    func_020d6240(0, &data_02144968, &data_02144978, &data_02144988, &data_0214498c);
}
