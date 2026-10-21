#include "m2c.h"
extern u8 data_0214d624[];
extern char data_02150e58[];
s32 func_020a5fcc(void);
s32 func_02067ca0(s32, s32);
void func_02067d44(s32, void *, void *, void *);
void func_020c9bf0(s32 arg0, void *arg1, void *arg2);
void func_0208fc74(s32 arg0, s32 arg1, void *arg2);
void func_021192e8(void) {
    s32 a[3];
    s32 out[3];
    s32 c0[3];
    s32 c1[3];
    s32 c2[3];
    s32 dx;
    s32 dy;
    s32 r;
    s32 d;
    s32 e;
    s32 f;

    dx = data_0214d624[0] - 0x7f;
    dy = -data_0214d624[1];
    r = func_020a5fcc();
    c0[0] = M2C_FIELD(data_02150e58, s32 *, 0x4C);
    c0[1] = M2C_FIELD(data_02150e58, s32 *, 0x58);
    c0[2] = M2C_FIELD(data_02150e58, s32 *, 0x64);
    c1[0] = M2C_FIELD(data_02150e58, s32 *, 0x50);
    c1[1] = M2C_FIELD(data_02150e58, s32 *, 0x5C);
    c1[2] = M2C_FIELD(data_02150e58, s32 *, 0x68);
    c2[0] = M2C_FIELD(data_02150e58, s32 *, 0x54);
    c2[1] = M2C_FIELD(data_02150e58, s32 *, 0x60);
    c2[2] = M2C_FIELD(data_02150e58, s32 *, 0x6C);
    d = func_02067ca0(M2C_FIELD(r, s16 *, 0x6C), M2C_FIELD(r, s16 *, 0x6E));
    e = (s32) (((s64) M2C_FIELD(r, s32 *, 0x74) * d + 0x800) >> 12);
    f = (s32) (((s64) e * M2C_FIELD(r, s32 *, 0x70) + 0x800) >> 12);
    func_02067d44(-0x12000, c2, (s8 *) r + 0x30, a);
    func_02067d44(f * dx * 20 / 128, c0, a, a);
    func_02067d44(e * dy * 20 / 192, c1, a, a);
    func_020c9bf0(r, a, out);
    func_0208fc74(0x31, 0, out);
}
