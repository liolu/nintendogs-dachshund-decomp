/* compiler: 1.2/sp2p3  */
/* func_02085b48 from projets/nintendogs-dachshund/src/auto/func_02085b48.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_020892c0(void *arg0, void *arg1) {
    void *temp_r2;

    temp_r2 = (*(void **) ((s8 *) (arg0) + (0)));
    if (temp_r2 == ((void *) 0)) {
        (*(void **) ((s8 *) (arg0) + (0))) = arg1;
        (*(void **) ((s8 *) (arg1) + (0))) = ((void *) 0);
        (*(void **) ((s8 *) (arg1) + (4))) = (void *) (*(void **) ((s8 *) (arg1) + (0)));
    } else {
        (*(void **) ((s8 *) (arg1) + (0)))                               = temp_r2;
        (*(void **) ((s8 *) (arg1) + (4)))                               = ((void *) 0);
        (*(void **) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0)))) + (4))) = arg1;
        (*(void **) ((s8 *) (arg0) + (0)))                               = arg1;
    }
    (*(s32 *) ((s8 *) (arg0) + (4))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (4))) + 1);
}
