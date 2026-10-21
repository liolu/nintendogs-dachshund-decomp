#include "m2c.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} Vec;

extern void *data_0215a064;
extern s32 data_02150e58[];

s32 func_02044980(s16);
void func_01ff832c(s32, const Vec *, const Vec *, Vec *);
void func_02100a4c(void *, void *);
s32 func_020afbf4(void *);
u16 func_02068480(s32, s32);

void func_021008e0(void *arg0) {
    Vec buf0;
    Vec buf1;
    Vec buf2;
    Vec buf3;
    s32 state;
    s32 a;
    s32 b;
    u16 angle;
    u8 *p214;
    u8 *q;

    state = func_02044980(M2C_FIELD(arg0, s16 *, 0x9C));
    p214 = M2C_FIELD(arg0, u8 **, 0x214);
    func_02044980(M2C_FIELD(arg0, s16 *, 0x9C));

    buf0 = *(Vec *) (M2C_FIELD(data_0215a064, u8 **, 0x1C) + 0x48);
    buf1.unk_00 = M2C_FIELD(data_02150e58, s32 *, 0x4C);
    buf1.unk_04 = M2C_FIELD(data_02150e58, s32 *, 0x58);
    buf1.unk_08 = M2C_FIELD(data_02150e58, s32 *, 0x64);
    buf2.unk_00 = M2C_FIELD(data_02150e58, s32 *, 0x50);
    buf2.unk_04 = M2C_FIELD(data_02150e58, s32 *, 0x5C);
    buf2.unk_08 = M2C_FIELD(data_02150e58, s32 *, 0x68);
    buf3 = *(Vec *) (M2C_FIELD(data_0215a064, u8 **, 0x1C) + 0x30);

    func_01ff832c(0x4000, &buf0, &buf3, (Vec *) ((u8 *) arg0 + 0xBC));
    func_01ff832c(-0x171, &buf1, (Vec *) ((u8 *) arg0 + 0xBC), (Vec *) ((u8 *) arg0 + 0xBC));
    func_01ff832c(0x28F, &buf2, (Vec *) ((u8 *) arg0 + 0xBC), (Vec *) ((u8 *) arg0 + 0xBC));
    func_02100a4c(arg0, (u8 *) arg0 + 0xC8);

    if (state == 0) {
        return;
    }
    if (M2C_FIELD(data_0215a064, u16 *, 0x84) & 2) {
        func_020afbf4(arg0);
        func_02044980(M2C_FIELD(arg0, s16 *, 0x9C));
        q = M2C_FIELD(arg0, u8 **, 0x214);
        a = M2C_FIELD(data_0215a064, s16 *, 0x86);
        b = M2C_FIELD(data_0215a064, s16 *, 0x88);
        if (((a > 0) ? a : -a) < 2 && ((b > 0) ? b : -b) < 2) {
            angle = M2C_FIELD(q, u16 *, 8);
        } else {
            angle = func_02068480(b, a);
        }
        M2C_FIELD(p214, u16 *, 8) = angle;
    }
}
