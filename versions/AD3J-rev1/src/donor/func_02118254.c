/* compiler: 1.2/sp2p3  */
/* func_020b8978 from projets/nintendogs-dachshund/src/auto/func_020b8978.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
extern s32 func_0211a520(void *);
s32 func_02118254(void *arg0) {
    if ((*(s32 *) ((s8 *) (arg0) + (0x2C))) == 0) {
        return 0;
    }
    if ((*(u16 *) ((s8 *) (arg0) + (0))) != 1) {
        return 0;
    }
    return func_0211a520(arg0 + 0x2C);
}
