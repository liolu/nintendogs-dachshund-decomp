/* compiler: 2.0/sp1p5  */
/* func_020b0dec from projets/nintendogs-shiba-friends/src/auto/func_020b0dec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_02153740;
s32 func_020b0dec(void) {
    s32 var_r0;

    var_r0 = 0;
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB8))) == 2) {
        var_r0 = (*(s32 *) ((s8 *) (data_02153740) + (0x980)));
    }
    return var_r0;
}
