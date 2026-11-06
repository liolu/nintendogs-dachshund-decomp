/* compiler: 2.0/sp1p5  */
/* func_020e21b8 from projets/nintendogs-dachshund/src/auto/func_020e21b8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_02153740;
s32 func_020af4c0(void) {
    s32 var_r0;

    var_r0 = 0;
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xA8))) != 5) {
        return 0;
    }
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB8))) == 2) {
        var_r0 = (*(s32 *) ((s8 *) (data_02153740) + (0xE4)));
    }
    return var_r0;
}
