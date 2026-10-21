#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

extern u8 data_02150e58[];
extern void *data_0215a064;

s32 func_02044980(s16 arg0);
void func_01ff832c(s32 arg0, Vec *arg1, Vec *arg2, Vec *arg3);
void func_02100a4c(void *arg0, void *arg1);
u16 func_02068480(s32 arg0, s32 arg1);
void func_02100bf4(void *arg0);
void func_020afc24(void *arg0);

void func_021006f4(void *arg0) {
    Vec buf0;
    Vec buf1;
    Vec buf2;
    Vec buf3;
    s32 state;
    s32 a;
    s32 b;
    u32 diff;
    u16 angle;
    u8 *p214;
    u8 *q;

    state = func_02044980(M2C_FIELD(arg0, s16 *, 0x9C));
    p214 = M2C_FIELD(arg0, u8 **, 0x214);
    func_02044980(M2C_FIELD(arg0, s16 *, 0x9C));

    buf0 = *(Vec *) (M2C_FIELD(data_0215a064, u8 **, 0x1C) + 0x48);
    buf1.x = M2C_FIELD(data_02150e58, s32 *, 0x4C);
    buf1.y = M2C_FIELD(data_02150e58, s32 *, 0x58);
    buf1.z = M2C_FIELD(data_02150e58, s32 *, 0x64);
    buf2.x = M2C_FIELD(data_02150e58, s32 *, 0x50);
    buf2.y = M2C_FIELD(data_02150e58, s32 *, 0x5C);
    buf2.z = M2C_FIELD(data_02150e58, s32 *, 0x68);
    buf3 = *(Vec *) (M2C_FIELD(data_0215a064, u8 **, 0x1C) + 0x30);

    func_01ff832c(0x4000, &buf0, &buf3, (Vec *) ((u8 *) arg0 + 0xBC));
    func_01ff832c(-0x171, &buf1, (Vec *) ((u8 *) arg0 + 0xBC), (Vec *) ((u8 *) arg0 + 0xBC));
    func_01ff832c(0x28F, &buf2, (Vec *) ((u8 *) arg0 + 0xBC), (Vec *) ((u8 *) arg0 + 0xBC));
    func_02100a4c(arg0, (u8 *) arg0 + 0xC8);

    if (state == 0) {
        return;
    }
    if (M2C_FIELD(data_0215a064, u16 *, 0x84) & 1) {
        func_02044980(M2C_FIELD(arg0, s16 *, 0x9C));
        q = M2C_FIELD(arg0, u8 **, 0x214);
        a = M2C_FIELD(data_0215a064, s16 *, 0x86);
        b = M2C_FIELD(data_0215a064, s16 *, 0x88);
        if (((a > 0) ? a : -a) < 2 && ((b > 0) ? b : -b) < 2) {
            angle = M2C_FIELD(q, u16 *, 8);
        } else {
            angle = func_02068480(b, a);
        }
        diff = (u16) (angle - M2C_FIELD(p214, u16 *, 8));
        if (diff > 0x8000) {
            if (diff < 0xE000) {
                diff = 0xE000;
            }
            M2C_FIELD(p214, s32 *, 0) += 0x10000 - diff;
            if (M2C_FIELD(p214, s32 *, 0) >= 0x100000) {
                M2C_FIELD(p214, s32 *, 0) -= 0x100000;
            }
            func_02100bf4(arg0);
        } else {
            if (diff > 0x2000) {
                diff = 0x2000;
            }
            M2C_FIELD(p214, s32 *, 0) -= diff;
            if (M2C_FIELD(p214, s32 *, 0) < 0) {
                M2C_FIELD(p214, s32 *, 0) += 0x100000;
            }
            func_02100bf4(arg0);
        }
        M2C_FIELD(p214, u16 *, 8) = angle;
    } else {
        func_020afc24(arg0);
    }
}
