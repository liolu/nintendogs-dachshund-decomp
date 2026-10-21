#include "m2c.h"
M2C_UNK func_020e7f9c(M2C_UNK);                      /* extern */
s32 func_020e7ec4(M2C_UNK, M2C_UNK *);               /* extern */
M2C_UNK func_020ec2f4(M2C_UNK, s32);                 /* extern */
M2C_UNK func_020ec328(M2C_UNK, s32);                 /* extern */
M2C_UNK func_020ec2c0(M2C_UNK, s32);                 /* extern */
M2C_UNK func_020ec134(M2C_UNK, s32);                 /* extern */
M2C_UNK func_020ec0d8(M2C_UNK, s32);                 /* extern */
void func_020d6384(s32, s32, s32);                   /* extern */
void func_020db55c(void);                            /* extern */
M2C_UNK func_020db0fc(M2C_UNK, s32, s32, M2C_UNK, s32); /* extern */
s32 func_020d640c(s32, s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020db44c(s32, M2C_UNK);                 /* extern */
M2C_UNK func_020db03c(M2C_UNK, s32, M2C_UNK);        /* extern */
M2C_UNK func_020da98c(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
void func_020eb3f0(M2C_UNK, M2C_UNK);                /* extern */
void func_020e13f4(void);                            /* extern */
M2C_UNK func_020eb9a8(M2C_UNK, M2C_UNK *, M2C_UNK);  /* extern */
void func_020f0ca4(s32, s32, s32, s32, u16, u16, s32, s16, s16, s16, s16); /* extern */
extern M2C_UNK data_02144518;
extern M2C_UNK data_02144528;
extern M2C_UNK data_02144538;
extern M2C_UNK data_02144548;
extern M2C_UNK data_02144560;
extern M2C_UNK data_0214449c;
extern M2C_UNK data_0214445c;
void func_020d82e4(s32 arg0) {
    s32 h0;
    s32 h1;
    s32 h2;
    s32 h3;
    s32 h4;
    s32 z5;
    s32 z0;
    s32 z1;
    s32 z2;
    s32 z3;
    s32 z4;
    s32 i;
    s8 *e;
    s32 h;
    s32 r;

    func_020e7f9c(0x2b);
    h0 = func_020e7ec4(0x2b, &data_02144518);
    h1 = func_020e7ec4(0x2b, &data_02144528);
    h2 = func_020e7ec4(0x2b, &data_02144538);
    h3 = func_020e7ec4(0x2b, &data_02144548);
    h4 = func_020e7ec4(0x2b, &data_02144560);
    func_020ec2f4(2, h0);
    func_020ec328(2, h1);
    func_020ec2c0(2, h2);
    func_020ec134(2, h3);
    func_020ec0d8(2, h4);
    func_020d6384(2, 0, 0);
    func_020db55c();

    z5 = 0;
    z0 = 0;
    z1 = 0;
    z2 = 0;
    z3 = 0;
    z4 = 0xe;

    e = (s8 *) &data_0214449c;
    for (i = 0; i < 5; i++, e += 0xc) {
        h = func_020db0fc(z0, h3, h1, M2C_FIELD(e, s32 *, 0), z0);
        r = func_020d640c(2, z1, M2C_FIELD(e, u16 *, 8), z1);
        func_020db44c(h, z2);
        func_020db03c(z3, h, z4);
        if (r != 0) {
            func_020da98c(z5, h2, M2C_FIELD(e, s32 *, 0), M2C_FIELD(e, s32 *, 4), r);
        }
    }

    func_020eb3f0(2, 2);
    func_020e13f4();
    func_020eb9a8(2, &data_0214445c, 0);
    func_020f0ca4(arg0 + 4, 2, 1, 0, 0, 0, 0, 0, 0, 0xa, 0xa);
    func_020f0ca4(arg0 + 0x40, 2, 3, 0, 0, 0, 0, 0, 0, 0xa, 0xa);
    func_020f0ca4(arg0 + 0x7c, 2, 2, 0, 0, 0, 0, 0, 0, 0xa, 0xa);
    func_020f0ca4(arg0 + 0xb8, 2, 0, 0, 0, 0, 0, 0, 0, 0xa, 0xa);
    func_020f0ca4(arg0 + 0xf4, 2, 4, 0, 0, 0, 0, 0, 0, 0xa, 0xa);
}
