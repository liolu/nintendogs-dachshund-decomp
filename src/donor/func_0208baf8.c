/* compiler: 2.0/sp1p5  */
/* func_020678e0 from projets/madagascar/src/auto/func_020678e0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_0208baf8(s32 arg0, s32 arg1) {
    s32 var_r1;
    s32 var_r2;
    void **temp_r2;
    void *temp_r3;

    var_r1  = arg1;
    temp_r3 = (*(void **) ((s8 *) (arg0) + (0)));
    temp_r2 = (*(void ***) ((s8 *) (arg0) + (4)));
    if (temp_r3 != ((void *) 0)) {
        (*(void ***) ((s8 *) (temp_r3) + (4))) = temp_r2;
    }
    if (temp_r2 != ((void *) 0)) {
        *temp_r2 = temp_r3;
    }
    var_r2 = (*(s32 *) ((s8 *) (var_r1) + (4)));
    if (var_r2 != 0) {
        do {
            var_r1 = var_r2;
            var_r2 = (*(s32 *) ((s8 *) (var_r2) + (4)));
        } while (var_r2 != 0);
    }
    (*(s32 *) ((s8 *) (var_r1) + (4)))  = arg0;
    (*(void **) ((s8 *) (arg0) + (0)))  = (void *) var_r1;
    (*(void ***) ((s8 *) (arg0) + (4))) = ((void *) 0);
}
