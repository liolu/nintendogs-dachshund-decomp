/* compiler: 1.2/sp2p3  */
/* func_02096cf8 from projets/nintendogs-dachshund/src/auto/func_02096cf8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
extern void func_020f7cdc(void);
extern s32 data_021550ac;
extern s32 data_021550bc;
extern s32 data_021550e8;
void func_020f748c(void) {
    if (data_021550e8 != 0) {
        return;
    }
    func_020f7cdc();
    data_021550bc = data_021550ac;
    data_021550e8 = 1;
}
