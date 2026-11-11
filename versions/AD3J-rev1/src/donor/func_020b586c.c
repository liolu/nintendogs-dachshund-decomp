/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b586c from projets/nintendogs-chihuahua-friends/src/donor/func_020b586c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed char s8;
extern u32 data_0213f054;
extern void func_020a3aec(int a, void *b, int c);
extern void func_02041b64(int a);
void func_020b586c(int param_1) {
    int iVar1;

    *(u32 *) (param_1 + 0x1c) = 0;
    func_020a3aec(0xe, (void *) &data_0213f054, 2);
    iVar1 = 0;
    do {
        func_02041b64((int) (s8) iVar1);
        iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
}
