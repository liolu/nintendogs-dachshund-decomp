/* compiler: 1.2/sp2p3  */
/* func_0211dea0 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0211dea0.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0211f528();
extern M2C_UNK func_0211fb34(M2C_UNK *, M2C_UNK *);
extern void *data_021560e8;
extern M2C_UNK func_0211dc00;
void func_0211de98(void) {
    M2C_UNK sp0;

    if (func_0211f528() == 0) {
        return;
    }
    (*(s16 *) ((s8 *) (data_021560e8) + (0x78))) = 0x384;
    func_0211fb34(&func_0211dc00, &sp0);
}
