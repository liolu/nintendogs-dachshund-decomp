/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209edc4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209edc4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u32 vu32;
typedef struct {
    u32 w0;
    u8 pad4[8];
    s16 s0c;
    s16 s0e;
    u8 pad10[2];
    s16 arr[3];
    u16 u18;
    u16 u1a;
    u32 w1c;
    u8 pad20[6];
    s16 s26;
    s16 s28;
    u32 w2c;
} G;
extern G data_02154dd8;
extern u8 *data_02154ddc;
extern u32 func_0207201c(u8 **p);
extern void func_02072320(u8 **p, u32 zero);
extern void func_02072214(G *obj, s32 a, s32 b);
u32 func_020edb5c(u32 param) {
    G *b;
    s16 i;
    s32 iv;
    s32 i1;
    u16 uv;
    u16 u2;
    G *p;
    u8 **pp;

    b  = &data_02154dd8;
    pp = &data_02154ddc;
    if (b->w2c == 0) {
        goto INIT;
    }
    if (*pp == 0) {
        goto INIT;
    }
    if (func_0207201c(pp) == param) {
        return 0;
    }
    func_02072320(pp, 0);
    goto RET0;
INIT:
    if (*(vu32 *) &b->w2c != 0) {
        goto RET0;
    }
    i = 0;
    do {
        b->arr[i] = -1;
        i         = (s16) (i + 1);
    } while (i < 3);
    b->s26 = (s16) param;
    b->w2c = 1;
    b->s28 = 1;
    p      = &data_02154dd8;
    p->s0e = 40;
    iv     = 60;
    if (p->w0 != 0) {
        if (p->w1c != 0) {
            u2     = p->u1a;
            uv     = p->u18;
            p->u18 = 0;
            p->w1c = 0;
            iv     = u2 - uv;
        }
        i1 = p->s0c * 40;
        func_02072214(p, i1 / 100, iv);
    }
    return 1;
RET0:
    return 0;
}
