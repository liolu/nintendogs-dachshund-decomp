/* compiler: 1.2/sp2p3  */
/* func_020f6bbc from projets/nintendogs-dachshund/src/auto/func_020f6bbc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020d79b4(void *, void *, M2C_UNK, M2C_UNK, s32);
void func_020d2bdc(void *arg0) {
    (*(s32 *) ((s8 *) (arg0) + (0xA8))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xA8))) + 0xC000);
    func_020d79b4(arg0 + 0xA8, arg0 + 0xB0, 0, 0, 0);
}
