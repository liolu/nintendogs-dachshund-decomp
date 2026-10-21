#include "m2c.h"
extern void *data_0214d750;
void func_020ebe84(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void *data_02159e70;
extern u16 data_02144a78[];
extern M2C_UNK data_02144c5c;
extern M2C_UNK data_02144c6c;
extern M2C_UNK data_02144c7c;
extern M2C_UNK data_02144c90;
extern void *data_0215a044;
extern void *data_0215a064;
s32 func_020e7ec4(s32, void *);
void func_020ec2f4(s32, s32);
void func_020ec328(s32, s32);
void func_020ec134(s32, s32);
void func_020ec0d8(s32, s32);
s32 func_02114a1c(void);
void func_020d5bb4(s32, s32, s32, u16, u16, s32, s32, u16);
void func_020d5a48(s32, void *, u16, s32, s32);
void func_020d5c44(s32, void *, s32, s32);
s32 func_020eb5a4(s32 a, s32 b, s32 c);
s32 func_020eb6cc(s32 a, s32 b, s32 c, s32 d);
void func_020e64cc(void *p, s32 a, s32 b);
void func_020e6dbc(void *p, s32 a, s32 b);
void func_020e63dc(void *p);
void func_020e65dc(void *p);
void func_020ddc28(void);
void func_020ddc38(void);
void func_020ddc48(void);
void func_020ddc68(void);
void func_020ddc78(void);
void func_020ebbdc(s32 a, s32 b, s32 c, s32 d);
extern u16 data_021463bc[];
extern u16 data_021462dc[];
extern u16 data_0214634c[];
extern u16 data_02144f68[];
void func_020e5064(s32 a, s32 b, s32 c, s32 d) {
    u16 v2;
    u16 v1;
    u16 v0;
    u32 *p;
    u32 rem;

    p = (u32 *) ((u8 *) data_0214d750 + 0x2C);
    rem = p[0] % 12;
    v2 = (p[2] << 16) / 60;
    v1 = (p[1] << 16) / 60;
    v0 = v1 / 12 + (rem << 16) / 12;
    if (b != 0xFFFF) {
        func_020ebe84(a, b, -0x20, -0x20, 0x1000, 0x1000, v0, 0x1F, 1);
    }
    if (c != 0xFFFF) {
        func_020ebe84(a, c, -0x20, -0x20, 0x1000, 0x1000, v1, 0x1E, 1);
    }
    if (d != 0xFFFF) {
        func_020ebe84(a, d, -0x20, -0x20, 0x1000, 0x1000, v2, 0x1D, 1);
    }
}
