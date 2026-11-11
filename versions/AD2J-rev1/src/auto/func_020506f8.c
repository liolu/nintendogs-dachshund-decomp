/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02050dc4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02050dc4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern int func_0202785c(u8 *a, u8 *b);
extern int func_0202ded8(u8 *p);
extern int func_020276d8(u8 *a, u8 *b);
extern void func_0203e2b8(u8 *p, int a);
u32 func_020506f8(u8 *param_1, u8 *param_2, int param_3) {
    int bVar1;
    int iVar2;

    iVar2 = func_0202785c(param_2, param_1);
    bVar1 = (iVar2 >= 1 && func_0202ded8(param_2) == 0);
    if (bVar1 == 0) {
        goto L90;
    }
    iVar2 = func_020276d8(param_1, param_2);
    if (iVar2 == -1) {
        goto retA;
    }
    if (iVar2 == 0) {
        goto call1;
    }
    if (iVar2 != 1) {
        goto ret0;
    }
retA:
    return 0;
call1:
    func_0203e2b8(param_1, param_3);
    return 1;
L90:
    iVar2 = func_020276d8(param_1, param_2);
    if (iVar2 == -1) {
        goto callp3;
    }
    if (iVar2 == 0) {
        goto callp3;
    }
    if (iVar2 != 1) {
        goto ret0;
    }
    if (param_3 == 0x29a) {
        goto c1;
    }
    if (param_3 == 0x29b) {
        goto c2;
    }
    if (param_3 != 0x29c) {
        goto ret0;
    }
    goto c3;
c1:
    func_0203e2b8(param_1, 0x29e);
    return 1;
c2:
    func_0203e2b8(param_1, 0x29f);
    return 1;
c3:
    func_0203e2b8(param_1, 0x2a0);
    return 1;
callp3:
    func_0203e2b8(param_1, param_3);
    return 1;
ret0:
    return 0;
}
