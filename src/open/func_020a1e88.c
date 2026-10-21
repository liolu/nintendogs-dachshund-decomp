#include "m2c.h"

extern u8 data_0213e130[];
extern u8 data_0213e148[];
extern u8 data_0213e160[];
extern u8 data_0213e178[];
extern u8 data_0213e198[];
extern u8 data_0213e1b4[];
extern u8 data_0213e1d0[];
extern u8 data_0213e1ec[];
extern u8 data_0213e1f0[];
extern u8 data_0213e20c[];
extern u8 data_0213e224[];
extern u8 data_0213e23c[];
extern u8 data_0213e254[];
extern void *data_02159e70;
extern void *data_02159e30;

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
s32 func_020cbbe8(s32, s32, s32);
s32 func_020db0fc(s32, s32, s32, s32, s32);
void func_020daae8(s32, s32);
void func_020da98c(s32, s32, s32, s32, s32);
s32 func_020cdf80(void);
void func_020eb9fc(s32, u16, s32);
void func_020eba1c(s32, u16, s32);
void func_020e28d4(void);
void func_020e23fc(s32);

void func_020a1e88(void) {
    s32 h0;
    s32 h1;
    s32 h2;
    s32 h3;
    s32 h4;
    s32 handle;
    s32 i;

    func_020e7f9c(0x2D);
    h0 = func_020e7ec4(0x2D, data_0213e130);
    h1 = func_020e7ec4(0x2D, data_0213e148);
    h2 = func_020e7ec4(0x2D, data_0213e160);
    h3 = func_020e7ec4(0x2D, data_0213e178);
    h4 = func_020e7ec4(0x2D, data_0213e198);
    func_020ec2f4(2, h0);
    func_020ec328(2, h1);
    func_020ec2c0(2, h2);
    func_020ec134(2, h3);
    func_020ec0d8(2, h4);
    func_020d6240(0x2D, data_0213e1b4, data_0213e1d0, data_0213e1ec, data_0213e1f0);
    M2C_FIELD((s8 *) data_02159e70 + 0xC000, s32 *, 0x838) = 5;
    M2C_FIELD((s8 *) data_02159e70 + 0xC000, s32 *, 0x83C) = 1;
    func_020e7f9c(0x36);
    func_020d6158(0x36, data_0213e20c, data_0213e224, data_0213e23c, data_0213e254);
    func_020d6384(2, 1, 8);
    func_020db55c();
    handle = func_020cbbe8(M2C_FIELD(data_02159e30, s32 *, 0x24), 0x251D, 0);
    func_020db0fc(0, h3, h1, 8, 0);
    func_020daae8(0, 8);
    func_020da98c(0, h2, 8, 0, handle);
    {
        u16 buf[4] = {0};
        buf[0] = func_020cdf80() + 0x30;
        buf[1] = 0x2F;
        buf[2] = 0x35;
        buf[3] = 0;
        func_020db0fc(0, h3, h1, 9, 0);
        func_020daae8(0, 9);
        func_020da98c(0, h2, 9, 1, (s32) buf);
    }
    for (i = 0; i < 4; i++) {
        func_020eba1c(2, (u16) i, 1);
    }
    func_020eb9fc(2, 0, 0);
    func_020eb9fc(2, 1, 0);
    func_020eb9fc(2, 2, 0);
    func_020eb9fc(2, 3, 0);
    func_020eb9fc(2, 4, 0);
    func_020eb9fc(2, 5, 0);
    func_020eb9fc(2, 6, 0);
    func_020eb9fc(2, 7, 0);
    func_020e28d4();
    func_020e23fc(0);
    M2C_FIELD((s8 *) data_02159e70 + 0x1000, s32 *, 0xE30) = 3;
}
