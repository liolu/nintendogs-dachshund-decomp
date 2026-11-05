/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020da434 from projets/nintendogs-shiba-friends/src/donor/func_020da434.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern int data_02154ca4;
extern u32 func_02003844(int *a, int b);
extern void func_020d9c6c(int *a);
extern void func_020d9480(void *a);
extern void func_020d9b40(void);
extern void func_020da4c4(void);
int func_020da43c(int *param_1) {
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
    func_020d9c6c(param_1);
    func_020d9480((void *) func_020da4c4);
    func_020d9b40();
    return data_02154ca4;
}
