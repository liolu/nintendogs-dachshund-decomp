/* compiler: 1.2/sp2p3  */
/* func_020b5d70 from projets/children-of-mana/src/auto/func_020b5d70.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
extern void func_02121478(void);
extern s32 data_02154c78;
void func_020cfe64(void) {
    if (data_02154c78 == 0) {
        return;
    }
    func_02121478();
    data_02154c78 = 0;
}
