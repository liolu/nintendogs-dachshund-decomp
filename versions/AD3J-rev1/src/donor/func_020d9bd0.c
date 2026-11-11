/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ebec4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ebec4.c (license: none), reused by
 * tools/donor_match.py */
typedef signed short s16;
extern int data_02154ca0;
extern void func_0208b608(int a);
extern void func_0208b654();
extern void func_0207e76c();
void func_020d9bd0(void) {
    int iVar4;
    int *piVar3;
    int iVar2;
    int flag;

    iVar4 = 0;
    iVar2 = 0;
    do {
        piVar3 = (int *) (data_02154ca0 + 0x30 + iVar2);
        flag   = (piVar3[3] & 0x10U) ? 1 : 0;
        if (flag != 0) {
            func_0208b608((int) piVar3);
            func_0208b654(piVar3);
        }
        if ((int *) piVar3[0x13] != (int *) 0x0) {
            func_0207e76c(piVar3[0x13]);
            piVar3[0x13] = 0;
        }
        iVar4 = (s16) (iVar4 + 1);
        iVar2 = iVar2 + 0x54;
    } while (iVar4 < 3);
    data_02154ca0 = 0;
}
