/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209e494 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209e494.c (license: none), reused by
 * tools/donor_match.py */
extern int data_02154dd8[];
extern int data_02154de0[];
extern void func_02072320(void *p, int arg);
int func_020ed318(int arg) {
    int *piVar1 = data_02154dd8;
    int *piVar2 = data_02154de0;
    if (piVar1[16] != 0) {
        piVar1[16]                                 = 0;
        *(short *) ((char *) piVar1 + 52)          = -1;
        piVar1[15]                                 = -1;
        *(unsigned short *) ((char *) piVar1 + 56) = 0;
        piVar1[17]                                 = 0;
        if (*piVar2 != 0) {
            func_02072320(piVar2, arg);
        }
        if (*piVar1 != 0) {
            func_02072320(piVar1, arg);
            return 1;
        }
    }
    return 0;
}
