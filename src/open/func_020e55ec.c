#include "m2c.h"
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
void func_020e55ec(void *arg0, s32 arg1, s32 arg2) {
    s32 idx;
    void *q;
    s32 v;
    u8 *e;
    s32 i;

    q = (u8 *) arg0 + 0x1C5C;
    idx = func_020eb5a4(2, arg1, arg2);
    if (idx < 0) {
        return;
    }
    if (idx > 0x38) {
        return;
    }
    switch (M2C_FIELD(q, s32 *, 0)) {
    case 0:
        M2C_FIELD(arg0, u16 *, 0xC) = data_021463bc[idx];
        break;
    case 1:
        M2C_FIELD(arg0, u16 *, 0xC) = data_021462dc[idx];
        break;
    case 2:
        M2C_FIELD(arg0, u16 *, 0xC) = data_0214634c[idx];
        break;
    default:
        M2C_FIELD(arg0, u16 *, 0xC) = data_021463bc[idx];
        break;
    }
    M2C_FIELD(arg0, s32 *, 8) = idx;

    switch (idx) {
    case 3:
        if (M2C_FIELD(arg0, u16 *, 0x30) != 0) {
            func_020e64cc(arg0, M2C_FIELD(arg0, s32 *, 8), 1);
            v = M2C_FIELD(arg0, s32 *, 8);
            e = (u8 *) arg0 + 0x38;
            for (i = 0; i < 0xA; i++, e += 4) {
                if (*(s16 *) (e + 2) == 0) {
                    *(s16 *) e = v;
                    *(s16 *) (e + 2) = 5;
                    break;
                }
            }
            func_020ddc48();
            M2C_FIELD(arg0, u16 *, 0x30) = M2C_FIELD(arg0, u16 *, 0x30) - 1;
            data_02144f68[M2C_FIELD(arg0, u16 *, 0x30)] = 0;
            func_020e65dc(arg0);
        } else {
            func_020ddc38();
        }
        break;
    case 0x34:
        func_020e6dbc(arg0, 3, 1);
        break;
    case 0x33:
        func_020ddc28();
        break;
    case 0x35:
        func_020e6dbc(arg0, 5, 1);
        break;
    case 0x36:
        func_020e6dbc(arg0, 6, 1);
        break;
    case 0x37:
        func_020e6dbc(arg0, 7, 1);
        break;
    case 1:
        if (M2C_FIELD(arg0, s32 *, 0x864) == 0) {
            M2C_FIELD(arg0, s32 *, 0x864) = 1;
            func_020e64cc(arg0, 1, 1);
            if (M2C_FIELD(arg0, s32 *, 0x868) != 0) {
                M2C_FIELD(arg0, s32 *, 0x868) = 0;
                func_020e64cc(arg0, 0, 0);
            }
            func_020e6dbc(arg0, 1, 1);
        } else {
            M2C_FIELD(arg0, s32 *, 0x864) = 0;
            func_020e64cc(arg0, 1, 0);
            func_020e6dbc(arg0, 0, 1);
        }
        break;
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0x868) != 0) {
            M2C_FIELD(arg0, s32 *, 0x868) = 0;
            func_020e64cc(arg0, 0, 0);
            func_020e6dbc(arg0, 0, 1);
        } else {
            M2C_FIELD(arg0, s32 *, 0x868) = 1;
            func_020e64cc(arg0, 0, 1);
            func_020e6dbc(arg0, 2, 1);
            if (M2C_FIELD(arg0, s32 *, 0x864) != 0) {
                M2C_FIELD(arg0, s32 *, 0x864) = 0;
                func_020e64cc(arg0, 1, 0);
            }
        }
        break;
    case 0x31:
    case 0x32:
    case 0x38:
        break;
    default:
        func_020e63dc(arg0);
        if (M2C_FIELD(arg0, s32 *, 0x864) != 0) {
            M2C_FIELD(arg0, s32 *, 0x864) = 0;
            func_020e6dbc(arg0, 0, 1);
            func_020e64cc(arg0, 1, 0);
        }
        break;
    }

    if (M2C_FIELD(q, s32 *, 8) != 0) {
        switch (idx) {
        case 0x31:
            func_020ddc68();
            M2C_FIELD(arg0, s32 *, 0) = 2;
            func_020ebbdc(2, 5, 2, 2);
            func_020ebbdc(2, 7, 2, 2);
            M2C_FIELD(arg0, s32 *, 0x870) = 5;
            return;
        case 0x32:
            func_020ddc78();
            M2C_FIELD(arg0, s32 *, 0) = 3;
            func_020ebbdc(2, 6, 2, 2);
            func_020ebbdc(2, 8, 2, 2);
            M2C_FIELD(arg0, s32 *, 0x870) = 5;
            return;
        }
    } else {
        if (func_020eb6cc(2, 0x38, arg1, arg2) != 0x38) {
            return;
        }
        func_020ddc78();
        M2C_FIELD(arg0, s32 *, 0) = 3;
        func_020ebbdc(2, 9, 2, 2);
        func_020ebbdc(2, 0xA, 2, 2);
        M2C_FIELD(arg0, s32 *, 0x870) = 5;
    }
}
