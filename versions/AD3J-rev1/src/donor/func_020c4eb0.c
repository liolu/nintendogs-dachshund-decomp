/* compiler: 2.0/sp1p5  */
/* func_020ca4b8 from projets/nintendogs-dachshund/src/auto/func_020ca4b8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
void func_020c4eb0(void *arg0, void *arg1) {
    void *temp_r2;

    (*(void **) ((s8 *) ((*(void **) ((s8 *) (arg1) + (8)))) + (0xC))) = (void *) (*(void **) ((s8 *) (arg1) + (0xC)));
    (*(void **) ((s8 *) ((*(void **) ((s8 *) (arg1) + (0xC)))) + (8))) = (void *) (*(void **) ((s8 *) (arg1) + (8)));
    if (arg1 != (*(void **) ((s8 *) (arg0) + (0x10)))) {
        return;
    }
    temp_r2 = (*(void **) ((s8 *) (arg1) + (0xC)));
    if (temp_r2 == arg1) {
        (*(void **) ((s8 *) (arg0) + (0x10))) = ((void *) 0);
        return;
    }
    (*(void **) ((s8 *) (arg0) + (0x10))) = temp_r2;
}
