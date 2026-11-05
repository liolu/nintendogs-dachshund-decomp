/* compiler: 1.2/sp2p3  */
/* func_020957b8 from projets/nintendogs-dachshund/src/auto/func_020957b8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
extern s32 data_021473d0;
void func_020f5f4c(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        data_021473d0 |= 1 << arg0;
        return;
    }
    data_021473d0 &= 0xFFFF ^ (1 << arg0);
}
