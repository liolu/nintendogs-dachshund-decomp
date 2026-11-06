/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d142c from projets/nintendogs-chihuahua-friends/src/donor/func_020d142c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
extern void func_02069504(s32 *a, s32 *b, s32 *c);
extern void func_020069bc(s32 *a, s32 *b);
void func_020d1424(u8 *param_1) {
    s32 X[3];
    s32 Y[3];
    s32 Z[3];
    u8 *iVar1;
    s32 t0, t1, t2;

    iVar1 = *(u8 **) (param_1 + 0x214);
    t2    = *(s32 *) (param_1 + 0xd0);
    t1    = *(s32 *) (param_1 + 0xcc);
    t0    = *(s32 *) (param_1 + 0xc8);
    X[0]  = t0;
    X[1]  = t1;
    X[2]  = t2;
    t2    = *(s32 *) (param_1 + 0xdc);
    t1    = *(s32 *) (param_1 + 0xd8);
    t0    = *(s32 *) (param_1 + 0xd4);
    Y[0]  = t0;
    Y[1]  = t1;
    Y[2]  = t2;
    func_02069504(X, Y, Z);
    func_020069bc(X, X);
    func_020069bc(Z, Z);
    func_02069504(Z, X, Y);
    *(s32 *) (param_1 + 0xc8) = X[0];
    *(s32 *) (param_1 + 0xcc) = X[1];
    *(s32 *) (param_1 + 0xd0) = X[2];
    *(s32 *) (param_1 + 0xd4) = Y[0];
    *(s32 *) (param_1 + 0xd8) = Y[1];
    *(s32 *) (param_1 + 0xdc) = Y[2];
    *(s32 *) (param_1 + 0xe0) = Z[0];
    *(s32 *) (param_1 + 0xe4) = Z[1];
    *(s32 *) (param_1 + 0xe8) = Z[2];
    *(s32 *) (iVar1 + 0x1c)   = 0;
    *(s32 *) (iVar1 + 0x20)   = 0;
    *(s32 *) (iVar1 + 0x24)   = 0;
}
