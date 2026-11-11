/* compiler: 1.2/sp2p3  */
/* func_0207da10 from projets/nintendogs-chihuahua-friends/src/auto/func_0207da10.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
void func_0207da10(void *arg0, M2C_UNK (*arg1)(void *, void *, M2C_UNK), M2C_UNK arg2) {
    void *temp_r4;
    void *var_r0;

    var_r0 = (*(void **) ((s8 *) (arg0) + (0x2C)));
    if (var_r0 == ((void *) 0)) {
        return;
    }
    do {
        temp_r4 = (*(void **) ((s8 *) (var_r0) + (0xC)));
        arg1(var_r0 + 0x10, arg0, arg2);
        var_r0 = temp_r4;
    } while (temp_r4 != ((void *) 0));
}
