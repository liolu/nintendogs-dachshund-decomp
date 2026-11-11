/* compiler: 2.0/sp1p5  */
/* func_02114aec from projets/nintendogs-dachshund/src/auto/func_02114aec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
s32 func_0209335c(s32 arg0) {
    s32 var_r3;

    var_r3 = 0;
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xC0))) >= 0x2A30) {
        (*(s16 *) ((s8 *) (arg0) + (0x2E)))  = 2;
        (*(s16 *) ((s8 *) (arg0) + (0x30)))  = 0;
        (*(s16 *) ((s8 *) (arg0) + (0x100))) = 7;
        var_r3                               = 1;
    }
    return var_r3;
}
