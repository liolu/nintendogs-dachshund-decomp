/* compiler: 1.2/sp2p3  */
/* func_020badf4 from projets/nintendogs-dachshund/src/auto/func_020badf4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_0211a680(s32 arg0) {
    s32 *temp_r1;

    temp_r1 = (*(s32 **) ((s8 *) (arg0) + (0)));
    if (temp_r1 != ((void *) 0)) {
        (*(s32 *) ((s8 *) (arg0) + (8))) = (s32) (*temp_r1 - 1);
    } else {
        (*(s32 *) ((s8 *) (arg0) + (8))) = 0;
    }
    (*(s32 *) ((s8 *) (arg0) + (4))) = 0;
}
