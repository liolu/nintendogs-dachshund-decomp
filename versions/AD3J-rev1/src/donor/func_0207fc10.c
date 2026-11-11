/* compiler: 1.2/sp2p3  */
/* func_0205af64 from projets/children-of-mana/src/auto/func_0205af64.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207fb04();
extern s32 func_0208120c();
extern M2C_UNK func_02081220(s32);
void func_0207fc10(void *arg0) {
    s32 temp_r4;

    temp_r4                             = func_0208120c();
    (*(s32 *) ((s8 *) (arg0) + (0x64))) = 1;
    func_0207fb04();
    func_02081220(temp_r4);
}
