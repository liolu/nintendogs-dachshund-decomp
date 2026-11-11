/* compiler: 1.2/sp2p3  */
/* func_0206e3cc from projets/children-of-mana/src/auto/func_0206e3cc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
void func_02077d98(void *arg0) {
    M2C_UNK (*temp_r1)(arg0);

    temp_r1 = (*(M2C_UNK(**)())((s8 *) (arg0) + (0xC)));
    if (temp_r1 != ((void *) 0)) {
        temp_r1(arg0);
    }
    (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) + 1);
}
