/* compiler: 2.0/sp1p5  */
/* func_020e2990 from projets/nintendogs-dachshund/src/auto/func_020e2990.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_02153894;
s32 func_020afcbc(void) {
    s32 var_r0;

    var_r0 = 0;
    if ((*(s32 *) ((s8 *) (data_02153894) + (0))) != 0xD) {
        return 0;
    }
    if ((*(s32 *) ((s8 *) (data_02153894) + (0x58))) != 0) {
        var_r0 = 1;
    }
    return var_r0;
}
