/* compiler: 1.2/sp2p3  */
/* func_020615fc from projets/children-of-mana/src/auto/func_020615fc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0208120c();
extern M2C_UNK func_02081220(s32);
extern s32 func_02065320();
extern void *func_0206533c();
s32 func_02065b10(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_0208120c();
    temp_r0 = func_02065320();
    if (temp_r0 != 0) {
        func_02081220(temp_r5);
        return temp_r0;
    }
    (*(s32 *) ((s8 *) (func_0206533c()) + (0xBC))) = arg0;
    func_02081220(temp_r5);
    return 0;
}
