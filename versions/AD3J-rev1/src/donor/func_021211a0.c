/* compiler: 2.0/sp1p5  */
/* func_020c186c from projets/nintendogs-dachshund/src/auto/func_020c186c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
extern void *data_02157b60;
s32 func_021211a0(void) {
    if (data_02157b60 == ((void *) 0)) {
        return 0;
    }
    if ((s32) (*(s16 *) ((s8 *) (data_02157b60) + (0x12C))) > 0) {
        return 1;
    }
    return 0;
}
