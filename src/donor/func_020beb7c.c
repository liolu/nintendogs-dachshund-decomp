/* compiler: 1.2/sp2p3  */
/* func_020f1adc from projets/nintendogs-dachshund/src/auto/func_020f1adc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020b10cc(void);
extern void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020beb7c(s32 arg0) {
    (*(s32 *) ((s8 *) (arg0) + (4))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (4))) + 1);
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (4))) <= 0x78) {
        return;
    }
    func_020b8b0c(0, 3, 0);
    func_020b10cc();
}
