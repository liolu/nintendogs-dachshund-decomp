/* compiler: 1.2/sp2p3  */
/* func_020e1e84 from projets/nintendogs-dachshund/src/auto/func_020e1e84.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020b1108(M2C_UNK);
extern void *data_02153740;
extern s32 *data_02153894;
void func_020af1a4(void) {
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xA8))) != 6) {
        return;
    }
    if (*data_02153894 == 9) {
        return;
    }
    func_020b1108(9);
}
