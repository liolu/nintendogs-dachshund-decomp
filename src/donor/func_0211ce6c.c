/* compiler: 1.2/sp2p3  */
/* func_020bd5f0 from projets/nintendogs-dachshund/src/auto/func_020bd5f0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_021132f4(M2C_UNK, M2C_UNK);
void func_0211ce6c(s32 arg0) {
    s16 temp_r1;

    if ((*(s32 *) ((s8 *) (arg0) + (0))) != 2) {
        return;
    }
    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0x5C)));
    if (temp_r1 == -1) {
        return;
    }
    func_021132f4(arg0 + 0x30, (s32) temp_r1);
    (*(s32 *) ((s8 *) (arg0) + (0x58))) = 1;
}
