/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b1108 from projets/nintendogs-chihuahua-friends/src/donor/func_020b1108.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern int data_02153894;
extern int data_0213c504;
extern void func_0206dfbc(u32 a, u32 b, u32 c);
void func_020b1108(int param_1) {
    int iVar1;
    int *piVar2;
    vu16 z;

    piVar2 = (int *) data_02153894;
    iVar1  = *piVar2;
    if (iVar1 == param_1) {
        return;
    }
    if (iVar1 == 0) {
        goto zero;
    }
    if (iVar1 != 0) {
        iVar1 = piVar2[2];
        if (iVar1 != 0 && iVar1 != 5 && iVar1 != 6) {
            piVar2[2] = 5;
        }
    }
    piVar2[1] = param_1;
    return;
zero:
    z = 0;
    func_0206dfbc(z, (u32) (piVar2 + 4), 0x144);
    *piVar2   = param_1;
    piVar2[1] = 0;
    piVar2[2] = 1;
    piVar2[3] = ((int *) &data_0213c504)[param_1];
    ((void (*)(int *)) * (int *) piVar2[3])(piVar2 + 4);
}
