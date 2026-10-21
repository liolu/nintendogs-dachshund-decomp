#include "m2c.h"
extern void *data_02159e38;
extern void func_0206cbdc(s32, void *, s32);
extern u32 func_02080978(void);
void func_020d0304(s32 arg0, s16 arg1) {
    s32 base;
    s32 *p;
    s32 *q;
    s32 *e;
    u8 *P;
    u8 *t;
    u8 *u;
    u16 c;
    u32 r;
    u64 v;

    base = arg1 * 0x18 + (s32) data_02159e38;
    p = *(s32 **) (base + 0x1000 + 0x44C);
    q = p + 1;
    func_0206cbdc(arg0, q, 0x85C);
    e = (s32 *) ((s8 *) q + 0x640);
    r = func_02080978();
    P = (u8 *) data_02159e38;
    t = (u8 *) M2C_FIELD(P, u8 **, 0x141C);
    v = *(u64 *) (t + 4);
    M2C_FIELD(q, u32 *, 0x640) = (u32) v;
    M2C_FIELD(e, u32 *, 4) = (u32) (v >> 32);
    t = (u8 *) M2C_FIELD(P, u8 **, 0x141C);
    u = t + 0x60;
    c = M2C_FIELD(u, u16 *, 0x22);
    M2C_FIELD(u, u16 *, 0x22) = c + 1;
    M2C_FIELD(t, u16 *, 0x6AE) = M2C_FIELD(t, u16 *, 0x6AE) | 1;
    M2C_FIELD(e, u16 *, 8) = c;
    M2C_FIELD(e, u16 *, 0xA) = (u16) (r * 0x10DCD + 1);
    M2C_FIELD(p, u16 *, 0x8FE) = M2C_FIELD(p, u16 *, 0x8FE) | 1;
}
