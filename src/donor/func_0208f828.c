/* compiler: 1.2/sp2p3  */
/* func_02110ea8 from projets/nintendogs-dachshund/src/auto/func_02110ea8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_01ffec9c(M2C_UNK);
void func_0208f828(s32 arg0) {
    void *temp_r1;
    void *temp_r2;

    if ((*(s32 *) ((s8 *) (arg0) + (0x88))) != 0) {
        temp_r1                             = (*(void **) ((s8 *) (arg0) + (0x1C)));
        (*(s32 *) ((s8 *) (temp_r1) + (4))) = (s32) ((*(s32 *) ((s8 *) (temp_r1) + (4))) | 1);
    }
    func_01ffec9c(arg0);
    temp_r2                             = (*(void **) ((s8 *) (arg0) + (0x1C)));
    (*(s32 *) ((s8 *) (temp_r2) + (4))) = (s32) ((*(s32 *) ((s8 *) (temp_r2) + (4))) & ~1);
    (*(s32 *) ((s8 *) (arg0) + (0x88))) = 0;
}
