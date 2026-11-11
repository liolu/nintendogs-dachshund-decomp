/* compiler: 1.2/sp2p3  */
/* func_02060664 from projets/children-of-mana/src/auto/func_02060664.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *func_0207145c();
s32 func_020712d4(void) {
    s32 var_r4;
    void *var_r0;

    var_r4 = 0;
    var_r0 = func_0207145c();
    if (var_r0 != ((void *) 0)) {
        do {
            var_r0 = (*(void **) ((s8 *) (var_r0) + (0x28)));
            var_r4 += 1;
        } while (var_r0 != ((void *) 0));
    }
    return var_r4;
}
