/* compiler: 1.2/sp2p3  */
/* func_020c19ac from projets/nintendogs-dachshund/src/auto/func_020c19ac.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
extern void func_0211ec28(void);
extern void *data_02157b60;
void func_021212e8(void) {
    s16 temp_r1;

    if (data_02157b60 == ((void *) 0)) {
        return;
    }
    temp_r1 = (*(s16 *) ((s8 *) (data_02157b60) + (0x12C)));
    if ((s32) temp_r1 > 0) {
        (*(s16 *) ((s8 *) (data_02157b60) + (0x12C))) = (s16) (temp_r1 - 1);
    }
    func_0211ec28();
}
