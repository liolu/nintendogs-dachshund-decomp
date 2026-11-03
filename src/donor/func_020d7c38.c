/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e9f2c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e9f2c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02069668(u32 *a, u32 *b, u32 *c);
extern void func_02108218(u8 *p, int v);
extern void func_02069504(u32 *a, u32 *b, u32 *c);
extern void func_020069bc(u32 *a, u32 *b);
extern int func_02111cb4(int a, int b);
extern void func_0210fe50(u8 *p, int a, void *b, void *c, int d, void *e, int f, void *g, void *h, void *i);
extern void func_020d7e68(void);
extern void func_020d7e3c(void);
extern void func_020d7e24(void);
extern void func_020d7dac(void);
void func_020d7c38(u8 *param_1) {
    int iVar1;
    u32 *puVar2;
    u32 X[3];
    u32 Y[3];
    u32 Z[3];

    puVar2                    = *(u32 **) (param_1 + 0x214);
    *(int *) (param_1 + 0xb4) = *(int *) (param_1 + 0xb4) - 82;
    func_02069668((u32 *) (param_1 + 188), (u32 *) (param_1 + 176), (u32 *) (param_1 + 188));
    func_02108218(param_1, 0x470);
    {
        u32 a2 = *(u32 *) (param_1 + 0xd0);
        u32 a1 = *(u32 *) (param_1 + 0xcc);
        X[0]   = *(u32 *) (param_1 + 0xc8);
        X[1]   = a1;
        X[2]   = a2;
    }
    {
        u32 b2 = *(u32 *) (param_1 + 0xdc);
        u32 b1 = *(u32 *) (param_1 + 0xd8);
        Y[0]   = *(u32 *) (param_1 + 0xd4);
        Y[1]   = b1;
        Y[2]   = b2;
    }
    func_02069504(X, Y, Z);
    func_020069bc(X, X);
    func_020069bc(Z, Z);
    func_02069504(Z, X, Y);
    *(u32 *) (param_1 + 0xc8) = X[0];
    *(u32 *) (param_1 + 0xcc) = X[1];
    *(u32 *) (param_1 + 0xd0) = X[2];
    *(u32 *) (param_1 + 0xd4) = Y[0];
    *(u32 *) (param_1 + 0xd8) = Y[1];
    *(u32 *) (param_1 + 0xdc) = Y[2];
    *(u32 *) (param_1 + 0xe0) = Z[0];
    *(u32 *) (param_1 + 0xe4) = Z[1];
    *(u32 *) (param_1 + 0xe8) = Z[2];
    iVar1                     = func_02111cb4(*(u16 *) (param_1 + 0xa0), *(int *) (param_1 + 0xf8));
    func_0210fe50(param_1, *(int *) (param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1, (void *) func_020d7e68, 0,
                  (void *) func_020d7e3c, (void *) func_020d7e24, (void *) func_020d7dac);
    *(u32 *) (param_1 + 0xa8) = 0x1f40000;
    *puVar2                   = *puVar2 + 1;
    if (*puVar2 > 0xb4) {
        *(u16 *) (param_1 + 0xa6) = 2;
    }
}
