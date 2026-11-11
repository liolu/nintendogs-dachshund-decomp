/* compiler: 2.0/sp1p5  */
/* func_020f9578 from projets/nintendogs-dachshund/src/auto/func_020f9578.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_020d5588(s32 arg0, s32 arg1) {
    s32 var_r2;

    var_r2 = 1;
    if ((1 << arg1) != 0) {
        var_r2 = 0;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x16C))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x16C))) & var_r2);
    (*(s32 *) ((s8 *) (arg0) + (0xB4)))  = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xB4))) + 0x52);
}
