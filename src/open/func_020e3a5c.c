#include "m2c.h"
extern u16 data_02144a78[];
void func_020d5a48(s32, void *, u16, s32, s32);
void func_020d5c44(s32, void *, s32, s32);

extern void *data_02159e70;
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
void func_020e3a5c(s32 arg0) {
    s32 i;
    u8 *e;
    u16 *ids;

    e = (u8 *) arg0 + 0xF0;
    for (i = 0; i < 0x14; i++) {
        *(u16 *) (e + 4) = 0xFFFF;
        e += 0x10;
    }
    ids = data_02144a78;
    e = (u8 *) arg0 + 0xF0;
    for (i = 0; i < 0x14; i++) {
        if (*ids == 0xFFFF)
            break;
        func_020d5a48(2, e, *ids, 0x100, 0);
        e += 0x10;
        ids++;
    }
    *(s32 *) arg0 = 0;
    func_020d5c44(2, (u8 *) arg0 + 0xF0, *(s32 *) arg0, 0x10);
}
