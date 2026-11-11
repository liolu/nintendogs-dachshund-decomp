/* compiler: 1.2/sp2p3  */
/* func_02096a2c from projets/nintendogs-dachshund/src/auto/func_02096a2c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
extern void func_020f7cdc(void);
extern s32 data_021550ac;
void func_020f71c0(void) {
    if (data_021550ac != 1) {
        return;
    }
    func_020f7cdc();
    data_021550ac = 0;
}
