/* compiler: 1.2/sp2p3  */
/* func_020e6734 from projets/nintendogs-dachshund/src/auto/func_020e6734.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020b8ce8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020b38ec(s32 arg0) {
    s32 temp_r1;

    temp_r1 = (*(s32 *) ((s8 *) (arg0) + (0x870)));
    if (temp_r1 <= 0) {
        return;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x870))) = (s32) (temp_r1 - 1);
    if ((*(s32 *) ((s8 *) (arg0) + (0x870))) != 0) {
        return;
    }
    func_020b8ce8(2, 5, 0, 0);
    func_020b8ce8(2, 6, 0, 0);
    func_020b8ce8(2, 9, 0, 0);
    func_020b8ce8(2, 7, 0, 0);
    func_020b8ce8(2, 8, 0, 0);
    func_020b8ce8(2, 0xA, 0, 0);
}
