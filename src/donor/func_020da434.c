/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ec740 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ec740.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern int data_02154ca4;
extern u32 func_02003844(int *a, int b);
extern void func_020d9c64(int *a);
extern void func_020d9478(void *a);
extern void func_020d9b38(void);
extern void func_020da4bc(void);
int func_020da434(int *param_1) {
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2         = func_02003844(param_1, 0x14);
    iVar3         = 0;
    data_02154ca4 = iVar2;
    do {
        *(u16 *) (data_02154ca4 + iVar3 * 2)     = 0;
        iVar4                                    = (iVar3 + 1) * 0x10000;
        *(u32 *) (data_02154ca4 + iVar3 * 4 + 8) = 0;
        iVar3                                    = iVar4 >> 0x10;
    } while (iVar3 < 3);
    func_020d9c64(param_1);
    func_020d9478((void *) func_020da4bc);
    func_020d9b38();
    return data_02154ca4;
}
