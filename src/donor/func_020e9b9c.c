/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209adc8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209adc8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
extern int data_02154cb8;
extern int data_02154cc0;
extern void func_02073508(int *a, int b);
u32 func_020e9b9c(int param_1) {
    int *piVar4;
    int iVar2;
    int iVar3;

    piVar4 = (int *) &data_02154cb8;
    iVar2  = (int) &data_02154cc0;
    if (param_1 < 0) {
        goto zero;
    }
search:
    iVar3 = ((s16 *) iVar2)[param_1];
    if (iVar3 == -1) {
        goto dec;
    }
    func_02073508((int *) *piVar4, iVar3);
    iVar3 = 0;
    if (0 < param_1) {
        do {
            if (((s16 *) iVar2)[iVar3] > ((s16 *) iVar2)[param_1]) {
                ((s16 *) iVar2)[iVar3] = -1;
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < param_1);
    }
    iVar3 = param_1 + 1;
    if (iVar3 < 5) {
        do {
            if (((s16 *) iVar2)[iVar3] > ((s16 *) iVar2)[param_1]) {
                ((s16 *) iVar2)[iVar3] = -1;
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < 5);
    }
    return 1;
dec:
    param_1 = param_1 - 1;
    if (param_1 >= 0) {
        goto search;
    }
zero:
    return 0;
}
