#include "m2c.h"
extern void *data_02159e70;
extern u16 data_02144a78[];
extern M2C_UNK data_02144c5c;
extern M2C_UNK data_02144c6c;
extern M2C_UNK data_02144c7c;
extern M2C_UNK data_02144c90;
extern void *data_0215a044;
extern void *data_0215a064;
extern void *data_0214d750;
s32 func_020e7ec4(s32, void *);
void func_020ec2f4(s32, s32);
void func_020ec328(s32, s32);
void func_020ec134(s32, s32);
void func_020ec0d8(s32, s32);
s32 func_02114a1c(void);
void func_020d5bb4(s32, s32, s32, u16, u16, s32, s32, u16);
void func_020ebe84(s32, s32, s32, s32, s32, s32, s32, s32, s32);
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
void func_020e3878(s32 arg0) {
    s8 *ptr = (s8 *) data_02159e70;
    s32 state = M2C_FIELD(ptr, s32 *, 0xB8);
    s8 *base = ptr + 0xC4;

    if (state == 2) {
        M2C_FIELD(base + 0x200, u16 *, 0x70) = 1;
        M2C_FIELD(base + 0x200, u16 *, 0x72) = arg0;
    }
}
