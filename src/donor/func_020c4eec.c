/* compiler: 1.2/sp2p3  */
/* func_020ca4f4 from projets/nintendogs-dachshund/src/auto/func_020ca4f4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
void func_020c4eec(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r2;

    if (arg0 == ((void *) 0)) {
        return;
    }
    if (arg1 == ((void *) 0)) {
        return;
    }
    temp_r2 = (*(void **) ((s8 *) (arg0) + (0x10)));
    if (temp_r2 == ((void *) 0)) {
        (*(void **) ((s8 *) (arg0) + (0x10))) = arg1;
        (*(void **) ((s8 *) (arg1) + (8)))    = arg1;
        (*(void **) ((s8 *) (arg1) + (0xC)))  = arg1;
        return;
    }
    temp_r0                                 = (*(void **) ((s8 *) (temp_r2) + (8)));
    (*(void **) ((s8 *) (arg1) + (8)))      = temp_r0;
    (*(void **) ((s8 *) (arg1) + (0xC)))    = temp_r2;
    (*(void **) ((s8 *) (temp_r2) + (8)))   = arg1;
    (*(void **) ((s8 *) (temp_r0) + (0xC))) = arg1;
}
