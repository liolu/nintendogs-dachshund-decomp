#include "m2c.h"

typedef struct {
    s32 w[4];
} Q4;

extern void *data_02159e70;
extern void *data_02159e30;
extern u8 data_0213e528[];
extern u8 data_0213e538[];
extern u8 data_0213e548[];
extern u8 data_0213e558[];
extern u8 data_0213e574[];
extern u8 data_0213e5d8[];
extern u8 data_0213e58c[];
extern u8 data_0213e5a4[];
extern u8 data_0213e5bc[];
extern u8 data_0213e4dc[];
extern u8 data_0213e4e4[];

void func_020e7f9c(s32);
s32 func_020e7ec4(s32, void *);
void func_020ec2f4(s32, s32);
void func_020ec328(s32, s32);
void func_020ec2c0(s32, s32);
void func_020ec134(s32, s32);
void func_020ec0d8(s32, s32);
void func_020d6240(s32, void *, void *, void *, void *);
void func_020eb3f0(s32, s32);
void func_020ebbbc(s32, s32, s32);
void func_020d6384(s32, s32, s32);
void func_020db55c(void);
s32 func_020db0fc(s32, s32, s32, s32, s32);
void func_020daae8(s32, s32);
void func_020da6c4(s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_01ffdb08(s16);
s32 func_02023778(s32, s16);
void *func_02024104(s32, s16);
void func_0209ff1c(s32, s32, void *, void *, s32, s32, s32, s32, s32);
s32 func_020449c4(s32);
void func_020eb9fc(s32, s32, s32);
void func_020d2c64(s32, s32, s32, void *, s32);
void func_020e23fc(s32);

extern void func_020a4680(void);
extern void func_020a4704(void);

#pragma opt_strength_reduction off
void func_020a42e4(s8 *arg0) {
    s32 h0;
    s8 *r4;
    s32 h1;
    s32 h2;
    s32 h3;
    s32 h4;
    s32 handle;
    s32 v;
    s32 i;
    s32 j;
    s8 *cnt;
    u16 a[3];
    Q4 b;

    r4 = arg0 + 0x1D10;
    func_020e7f9c(0x42);
    h0 = func_020e7ec4(0x42, data_0213e528);
    h1 = func_020e7ec4(0x42, data_0213e538);
    h2 = func_020e7ec4(0x42, data_0213e548);
    h3 = func_020e7ec4(0x42, data_0213e558);
    h4 = func_020e7ec4(0x42, data_0213e574);
    func_020ec2f4(2, h0);
    func_020ec328(2, h1);
    func_020ec2c0(2, h2);
    func_020ec134(2, h3);
    func_020ec0d8(2, h4);
    func_020d6240(0x42, data_0213e58c, data_0213e5a4, data_0213e5bc, data_0213e5d8);
    M2C_FIELD((s8 *) data_02159e70 + 0xc000, s32 *, 0x838) = 4;
    M2C_FIELD((s8 *) data_02159e70 + 0xc000, s32 *, 0x83c) = 0;
    func_020eb3f0(1, 1);
    func_020eb3f0(0, 1);
    func_020eb3f0(3, 1);
    func_020eb3f0(2, 3);
    func_020ebbbc(2, 0x15, 1);
    func_020d6384(2, 0, 2);
    func_020db55c();
    func_020db0fc(0, h3, h1, 0x15, 0);
    func_020daae8(0, 0x15);
    func_020da6c4(0, h2, 0x15, 0, M2C_FIELD(data_02159e30, s32 *, 0xc), 0xf6e, 0,
                  (s32) func_020a4704);
    for (i = 0; i < 6; i++) {
        func_020db0fc(0, h3, h1, i + 0x16, 0);
    }
    handle = func_01ffdb08((s16) M2C_FIELD(r4, s32 *, 0));
    for (i = 0; i < 0xf; i++) {
        M2C_FIELD(arg0 + i * 2, s16 *, 0x68) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    cnt = arg0 + 0x88;
    for (j = 0; j < 0x14; j++) {
        if (func_02023778(handle, (s16) j) == 2) {
            if (*(u16 *) func_02024104(handle, (s16) j) != 1) {
                M2C_FIELD(arg0 + M2C_FIELD(arg0, s32 *, 0x88) * 2, u16 *, 0x68) = j;
                M2C_FIELD(cnt, s32 *, 0)++;
            }
        }
    }
    M2C_FIELD(r4, s32 *, 4) = 0;
    a[0] = M2C_FIELD(data_0213e4dc, u16 *, 0);
    a[1] = M2C_FIELD(data_0213e4dc, u16 *, 2);
    a[2] = M2C_FIELD(data_0213e4dc, u16 *, 4);
    b = *(Q4 *) data_0213e4e4;
    func_0209ff1c((s32) arg0, (s32) func_020a4680, &b, a, 3, 6, 0x28,
                  M2C_FIELD(arg0, s32 *, 0x88), M2C_FIELD(r4, s32 *, 4));
    if (func_020449c4((s16) M2C_FIELD(r4, s32 *, 0)) != 0) {
        for (i = 0; i < 6; i++) {
            func_020eb9fc(2, (u16) (i + 9), 0);
        }
        M2C_FIELD(arg0, s32 *, 0x94) = 6;
        v = 1;
    } else {
        v = 0;
        M2C_FIELD(arg0, s32 *, 0x94) = 0;
    }
    func_020d2c64(2, 0xf6f, v, (void *) func_020a4704, 1);
    func_020e23fc(0);
}
