#include "m2c.h"
extern u8 data_0213dfe4[];
extern u8 data_0213dff8[];
extern u8 data_0213e00c[];
extern u8 data_0213e020[];
extern u8 data_0213e03c[];
extern u8 data_0213e054[];
extern u8 data_0213e06c[];
extern u8 data_0213e084[];
extern u8 data_0213e088[];
extern u8 data_0213e09c[];
extern u8 data_0213e0b4[];
extern u8 data_0213e0cc[];
extern u8 data_0213e0e4[];
extern void *data_02159e70;
void func_020e7f9c(s32);
s32 func_020e7ec4(s32, void *);
void func_020ec2f4(s32, s32);
void func_020ec328(s32, s32);
void func_020ec2c0(s32, s32);
void func_020ec134(s32, s32);
void func_020ec0d8(s32, s32);
void func_020d6240(s32, void *, void *, void *, void *);
void func_020d6158(s32, void *, void *, void *, void *);
void func_020d6384(s32, s32, s32);
void func_020db55c(void);
s32 func_020d640c(s32, s32, s32, s32);
s32 func_020db0fc(s32, s32, s32, s32, s32);
void func_020daae8(s32, s32);
void func_020da98c(s32, s32, s32, s32, s32);
void func_020eb9fc(s32, u16, s32);
void func_020e28d4(void);
void func_020e13f4(void);
void func_020e23fc(s32);
void func_020d2c64(s32, s32, s32, s32, s32);
void func_0209f9c0(u8 *arg0) {
    s32 *p;
    s32 h0;
    s32 i;
    s32 h1;
    s32 h2;
    s32 h3;
    s32 h4;
    s32 handle;
    u16 id;

    p = (s32 *) (arg0 + 0x1CDC);
    func_020e7f9c(0x22);
    h0 = func_020e7ec4(0x22, data_0213dfe4);
    h1 = func_020e7ec4(0x22, data_0213dff8);
    h2 = func_020e7ec4(0x22, data_0213e00c);
    h3 = func_020e7ec4(0x22, data_0213e020);
    h4 = func_020e7ec4(0x22, data_0213e03c);
    func_020ec2f4(2, h0);
    func_020ec328(2, h1);
    func_020ec2c0(2, h2);
    func_020ec134(2, h3);
    func_020ec0d8(2, h4);
    func_020d6240(0x22, data_0213e054, data_0213e06c, data_0213e084, data_0213e088);
    M2C_FIELD((s8 *) data_02159e70 + 0xc000, s32 *, 0x838) = 5;
    M2C_FIELD((s8 *) data_02159e70 + 0xc000, s32 *, 0x83C) = 1;
    func_020e7f9c(0x33);
    func_020d6158(0x33, data_0213e09c, data_0213e0b4, data_0213e0cc, data_0213e0e4);
    func_020d6384(2, 0, 3);
    func_020db55c();
    for (i = 0; i < 7; i++) {
        handle = func_020d640c(2, 0, 4000, i);
        id = i;
        func_020db0fc(0, h3, h1, id, 0);
        func_020daae8(0, id);
        func_020da98c(0, h2, id, id, handle);
    }
    for (i = 0; i < 7; i++) {
        func_020eb9fc(2, i + 0xE, 0);
    }
    func_020e28d4();
    func_020e13f4();
    func_020e23fc(0);
    if (*p == 0) {
        func_020d2c64(8, 0x2457, 0, 0, 1);
        *p = 1;
    }
    M2C_FIELD((s8 *) data_02159e70 + 0x1000, s32 *, 0xe30) = 3;
}
