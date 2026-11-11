/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d7c40 from projets/nintendogs-chihuahua-friends/src/donor/func_020d7c40.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02069668(u32 *a, u32 *b, u32 *c);
extern void func_02108220(u8 *p, int v);
extern void func_02069504(u32 *a, u32 *b, u32 *c);
extern void func_020069bc(u32 *a, u32 *b);
extern int func_02111cbc(int a, int b);
extern void func_0210fe58(u8 *p, int a, void *b, void *c, int d, void *e, int f, void *g, void *h, void *i);
extern void func_020d7e70(void);
extern void func_020d7e44(void);
extern void func_020d7e2c(void);
extern void func_020d7db4(void);
void func_020d7c40(u8 *param_1) {
    int iVar1;
    u32 *puVar2;
    u32 X[3];
    u32 Y[3];
    u32 Z[3];

    puVar2                    = *(u32 **) (param_1 + 0x214);
    *(int *) (param_1 + 0xb4) = *(int *) (param_1 + 0xb4) - 82;
    func_02069668((u32 *) (param_1 + 188), (u32 *) (param_1 + 176), (u32 *) (param_1 + 188));
    func_02108220(param_1, 0x470);
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
    iVar1                     = func_02111cbc(*(u16 *) (param_1 + 0xa0), *(int *) (param_1 + 0xf8));
    func_0210fe58(param_1, *(int *) (param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1, (void *) func_020d7e70, 0,
                  (void *) func_020d7e44, (void *) func_020d7e2c, (void *) func_020d7db4);
    *(u32 *) (param_1 + 0xa8) = 0x1f40000;
    *puVar2                   = *puVar2 + 1;
    if (*puVar2 > 0xb4) {
        *(u16 *) (param_1 + 0xa6) = 2;
    }
}
