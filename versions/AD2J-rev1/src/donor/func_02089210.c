/* compiler: 1.2/sp2p3  */
/* func_02085a98 from projets/nintendogs-dachshund/src/auto/func_02085a98.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void *func_02089210(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = (*(void **) ((s8 *) (arg1) + (0)));
    if (temp_r3 == ((void *) 0)) {
        if ((*(void **) ((s8 *) (arg0) + (0))) == arg1) {
            (*(void **) ((s8 *) (arg0) + (0))) = ((void *) 0);
        } else {
            *(*(void ***) ((s8 *) (arg1) + (4))) = ((void *) 0);
        }
    } else if ((*(void **) ((s8 *) (arg0) + (0))) == arg1) {
        (*(void **) ((s8 *) (arg0) + (0)))                             = temp_r3;
        (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0)))) + (4))) = 0;
    } else {
        (*(void ***) ((s8 *) (temp_r3) + (4))) = (void **) (*(void ***) ((s8 *) (arg1) + (4)));
        *(*(void ***) ((s8 *) (arg1) + (4)))   = (*(void **) ((s8 *) (arg1) + (0)));
    }
    (*(s32 *) ((s8 *) (arg0) + (4))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (4))) - 1);
    return arg1;
}
