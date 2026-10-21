#include "m2c.h"
extern void *data_021510bc;
extern void *data_0215a030;
void func_020a7460(void *arg0);
void func_020af294(void *arg0);
void func_01ffdb08(s32 arg0);
void func_02079cd4(u32 *arg0) {
    u8 *rs;
    u8 *info;
    u8 *c;
    u16 *entry;
    u8 *node;
    u32 off;
    u32 *p;
    u32 *q;

    rs = data_021510bc;
    info = M2C_FIELD(rs, u8 **, 0xD4);
    c = M2C_FIELD(rs, u8 **, 0);
    entry = (u16 *) (info + M2C_FIELD(info, u16 *, 6));
    node = (u8 *) entry + *entry * c[1];
    off = M2C_FIELD(node, u32 *, 4);
    p = (u32 *) (info + off);
    if (M2C_FIELD(p, u16 *, 0) & 1) {
        arg0[0] |= 4;
        return;
    }
    arg0[0x13] = p[1];
    q = p + 1;
    arg0[0x14] = q[1];
    arg0[0x15] = q[2];
}
