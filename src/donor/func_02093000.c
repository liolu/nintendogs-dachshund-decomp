/* compiler: 1.2/sp2p3  */
/* func_02114770 from projets/nintendogs-dachshund/src/auto/func_02114770.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
extern void *data_02153720;
s32 func_02093000(void) {
    s32 var_r0;

    var_r0 = 0;
    if ((*(s16 *) ((s8 *) (data_02153720) + (0x7C))) != -1) {
        return 1;
    }
    if ((*(s16 *) ((s8 *) (data_02153720) + (0x7E))) != -1) {
        var_r0 = 2;
    }
    return var_r0;
}
