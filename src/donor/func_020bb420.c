/* compiler: 1.2/sp2p3  */
/* func_020bb420 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020bb420.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_02153740;
void func_020bb420(s32 *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = (*(s32 *) ((s8 *) (data_02153740) + (0xB4)));
    if ((temp_r1 == 4) || (temp_r1 == 0x26)) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
        return;
    }
    temp_r1_2 = *arg0;
    if (temp_r1_2 < 0x10) {
        *arg0 = temp_r1_2 + 1;
        return;
    }
    (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
}
