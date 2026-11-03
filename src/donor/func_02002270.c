/* compiler: 1.2/sp2p3  */
/* func_0205da34 from projets/children-of-mana/src/auto/func_0205da34.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
void func_02002270(void **arg0, void *arg1) {
    void *var_r0;
    void *var_r2;

    if (arg0 == ((void *) 0)) {
        return;
    }
    var_r2 = *arg0;
    if (var_r2 == ((void *) 0)) {
        (*(void **) ((s8 *) (arg1) + (8))) = ((void *) 0);
        *arg0                              = arg1;
        return;
    }
    var_r0 = (*(void **) ((s8 *) (var_r2) + (8)));
    if (var_r0 != ((void *) 0)) {
        do {
            var_r2 = var_r0;
            var_r0 = (*(void **) ((s8 *) (var_r0) + (8)));
        } while (var_r0 != ((void *) 0));
    }
    (*(void **) ((s8 *) (arg1) + (8)))   = var_r0;
    (*(void **) ((s8 *) (var_r2) + (8))) = arg1;
}
