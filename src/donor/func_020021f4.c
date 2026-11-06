/* compiler: 1.2/sp2p3  */
/* func_020111cc from projets/code-lyoko/src/auto/func_020111cc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
void func_020021f4(void *arg0) {
    void *var_r4;

    var_r4 = arg0;
    if (var_r4 == ((void *) 0)) {
        return;
    }
    do {
        (*(M2C_UNK(**)(s32))((s8 *) (var_r4) + (0)))((*(s32 *) ((s8 *) (var_r4) + (4))));
        var_r4 = (*(void **) ((s8 *) (var_r4) + (8)));
    } while (var_r4 != ((void *) 0));
}
