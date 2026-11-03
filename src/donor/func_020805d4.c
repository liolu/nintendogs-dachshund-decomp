/* compiler: 2.0/sp1p5  */
/* func_02062de0 from projets/madagascar/src/auto/func_02062de0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_020805d4(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = (*(s32 *) ((s8 *) (arg0) + (0x80)));
    if (temp_r3 == 0) {
        (*(s32 *) ((s8 *) (arg0) + (0x7C))) = arg1;
    } else {
        (*(s32 *) ((s8 *) ((*(s32 *) ((s8 *) (arg0) + (0x7C)))) + (0x10))) = arg1;
    }
    (*(s32 *) ((s8 *) (arg1) + (0xC)))  = temp_r3;
    (*(s32 *) ((s8 *) (arg1) + (0x10))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x80))) = arg1;
}
