/* compiler: 2.0/sp1p5  */
/* func_0200725c from projets/nintendogs-chihuahua-friends/src/auto/func_0200725c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
s32 func_0200725c(void *arg0) {
    if ((u32) (*(u32 *) ((s8 *) (arg0) + (0))) >= 0x18U) {
        return 0;
    }
    if ((u32) (*(u32 *) ((s8 *) (arg0) + (4))) >= 0x3CU) {
        return 0;
    }
    if ((u32) (*(u32 *) ((s8 *) (arg0) + (8))) < 0x3CU) {
        return 1;
    }
    return 0;
}
