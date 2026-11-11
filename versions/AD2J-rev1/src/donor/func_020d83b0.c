/* compiler: 1.2/sp2p3  */
/* func_020fc3a0 from projets/nintendogs-dachshund/src/auto/func_020fc3a0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02111378(void *, M2C_UNK, M2C_UNK, s32, s32);
void func_020d83b0(void *arg0, M2C_UNK arg1) {
    s32 temp_r3;

    temp_r3 = (*(s32 *) ((s8 *) (arg0) + (0xB4)));
    if ((temp_r3 < 0xA4) && (temp_r3 > -0xA4)) {
        func_02111378(arg0, arg1, 0xA40, 0xFB2, 0);
        return;
    }
    func_02111378(arg0, arg1, 0xA40, 0xE6A, 0);
}
