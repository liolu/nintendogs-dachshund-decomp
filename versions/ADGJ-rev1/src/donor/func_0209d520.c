/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209d520 from projets/nintendogs-chihuahua-friends/src/donor/func_0209d520.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern void func_0209064c(int a, int b, int c, int d, int e);
extern void func_02090624(int a, int b, int c, int d);
int func_0209d520(int param_1, int param_2, u16 param_3, u16 param_4, s16 param_5) {
    int iVar5;
    int p2;
    int iVar3;
    s16 *psVar4;
    int iVar6;
    int t0;

    t0     = param_1 + 0x18;
    p2     = param_2;
    psVar4 = (s16 *) ((u32) t0 + 30);
    iVar3  = 1;
    iVar6  = 0;
    iVar5  = 3;
    for (;;) {
        if (p2 < psVar4[2]) {
            iVar3 = (s16) (psVar4[0] + 1);
            goto LAB_020b58b0;
        }
        if (p2 == psVar4[2]) {
            iVar3 = psVar4[0];
            iVar6 = 1;
            goto LAB_020b58b0;
        }
        iVar5  = (s16) (iVar5 - 1);
        psVar4 = psVar4 - 5;
        if (iVar5 < 1) {
            goto LAB_020b58b0;
        }
    }
LAB_020b58b0:
    *(s16 *) (param_1 + 4)    = iVar3;
    *(u16 *) (param_1 + 6)    = 0;
    *(u16 *) (param_1 + 0x10) = p2;
    *(u16 *) (param_1 + 0x12) = param_3;
    *(u16 *) (param_1 + 0x14) = param_4;
    *(s16 *) (param_1 + 0x16) = param_5;
    if (iVar3 <= 1) {
        func_0209064c(param_1, iVar3, p2, 0, iVar6);
    } else if (iVar3 < 4) {
        func_02090624(param_1, iVar3, p2, 0);
    }
    return iVar3;
}
