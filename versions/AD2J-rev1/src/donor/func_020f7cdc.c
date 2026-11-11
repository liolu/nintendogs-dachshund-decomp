/* compiler: 1.2/sp2p3  */
/* func_02097550 from projets/nintendogs-dachshund/src/auto/func_02097550.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
extern void func_02001ea0(void);
extern s32 data_02155494;
extern s32 data_02155498;
void func_020f7cdc(void) {
    if (data_02155494 == 0) {
        return;
    }
    if (data_02155498 == 0) {
        return;
    }
    func_02001ea0();
    data_02155498 = 0;
}
