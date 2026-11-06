/* compiler: 1.2/sp2p3  */
/* func_020fc35c from projets/nintendogs-dachshund/src/auto/func_020fc35c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02110f8c(void *, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020d836c(void *arg0, M2C_UNK arg1) {
    func_02110f8c(arg0, arg1, 0xA40, 0);
    (*(s32 *) ((s8 *) (arg0) + (0xB4))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xB4))) + 0x19A);
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB4))) > 0x666) {
        (*(s32 *) ((s8 *) (arg0) + (0xB4))) = 0x666;
    }
}
