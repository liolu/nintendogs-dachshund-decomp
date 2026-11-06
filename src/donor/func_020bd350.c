/* compiler: 1.2/sp2p3  */
/* func_020bd350 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020bd350.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_02153740;
void func_020bd350(s32 *arg0) {
    *arg0 += 1;
    if ((s32) *arg0 > 0xA) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
    }
}
