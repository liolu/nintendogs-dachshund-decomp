/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d6240(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020d6384(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020db0fc(M2C_UNK, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_020db55c();                            /* extern */
M2C_UNK func_020e2810();                            /* extern */
M2C_UNK func_020e3098(M2C_UNK);                     /* extern */
M2C_UNK func_020e3128();                            /* extern */
s32 func_020e7ec4(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_020e7f9c(M2C_UNK);                     /* extern */
M2C_UNK func_020eb428();                            /* extern */
M2C_UNK func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020ebbdc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_020ec098(M2C_UNK);                         /* extern */
s32 func_020ec0b8(M2C_UNK);                         /* extern */
M2C_UNK func_020ec0d8(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec134(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec2f4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec328(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_02144a00;
extern M2C_UNK data_02144a10;
extern M2C_UNK data_02144a20;
extern M2C_UNK data_02144a34;
extern M2C_UNK data_02144a44;
extern M2C_UNK data_02144a54;
extern M2C_UNK data_02144a64;
extern M2C_UNK data_02144a68;
extern void *data_02159e70;

void func_020e1030(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r6;
    s32 temp_r7;

    func_020e7f9c(9);
    func_020e2810();
    temp_r5   = func_020e7ec4(9, &data_02144a00);
    temp_r7   = func_020e7ec4(9, &data_02144a10);
    temp_r6   = func_020e7ec4(9, &data_02144a20);
    temp_r5_2 = func_020e7ec4(9, &data_02144a34);
    func_020ec2f4(2, temp_r5);
    func_020ec328(2, temp_r7);
    func_020ec134(2, temp_r6);
    func_020ec0d8(2, temp_r5_2);
    func_020eb428();
    func_020eb9fc(2, 3, 1);
    func_020eb9fc(2, 4, 1);
    func_020ebbdc(2, 3, 0, 0);
    func_020ebbdc(2, 4, 0, 0);
    func_020db55c();
    temp_r5_3 = func_020ec098(2);
    func_020db0fc(0, temp_r5_3, func_020ec0b8(2), 4, 0);
    func_020e3128();
    M2C_FIELD(data_02159e70, s32 *, 0xC838) = 1;
    M2C_FIELD(data_02159e70, s32 *, 0xC83C) = 1;
    func_020d6240(9, &data_02144a44, &data_02144a54, &data_02144a64, &data_02144a68);
    func_020e3098(1);
    func_020d6384(2, 2, 5);
    M2C_FIELD(arg0, s32 *, 0)      = 0;
    M2C_FIELD(arg0, s16 *, 0xC)    = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0xE)    = 0;
    M2C_FIELD(arg0, s32 *, 0x1C10) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C16) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C14) = 0;
}
