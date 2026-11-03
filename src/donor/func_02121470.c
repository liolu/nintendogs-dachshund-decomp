/* compiler: 1.2/sp2p3  */
/* func_020c1b3c from projets/nintendogs-dachshund/src/auto/func_020c1b3c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
extern void func_02070abc(void);
extern void func_0211ed98(void);
extern s32 data_02157b60;
void func_02121470(void) {
    if (data_02157b60 == 0) {
        return;
    }
    func_02070abc();
    func_0211ed98();
    data_02157b60 = 0;
}
