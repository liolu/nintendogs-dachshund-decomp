/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e1c2c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e1c2c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_021558c0;
extern u32 data_02147400;
typedef struct {
    u16 a;
    u16 b;
} TE;
extern TE data_021558d8[];
extern void func_0206e1b8(u8 *p, u16 *out, s32 n);
extern void func_020f7f24(u8 *p, u16 *q, s32 n, u16 *d);
void func_020f9cc8(u8 *param_1) {
    u32 i;
    u8 *p;
    u32 n;
    u16 buf[6];

    i = 0;
    p = param_1 + 12;
    if (data_021558c0 != 0) {
        return;
    }
    func_0206e1b8(p, buf, 4);
    p += 4;
    for (; i < data_02147400; i += 2) {
        n = data_02147400 / 40;
        if (i % n == 0) {
            data_021558d8[i / n] = *(TE *) buf;
        }
        func_020f7f24(p, buf + 2, 2, buf);
        p++;
    }
    data_021558c0 = 1;
}
