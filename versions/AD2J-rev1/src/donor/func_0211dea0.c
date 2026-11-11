/* compiler: 1.2/sp2p3  */
/* func_0211dea0 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0211dea0.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0211f530();
extern M2C_UNK func_0211fb3c(M2C_UNK *, M2C_UNK *);
extern void *data_021560e8;
extern M2C_UNK func_0211dc08;
void func_0211dea0(void) {
    M2C_UNK sp0;

    if (func_0211f530() == 0) {
        return;
    }
    (*(s16 *) ((s8 *) (data_021560e8) + (0x78))) = 0x384;
    func_0211fb3c(&func_0211dc08, &sp0);
}
