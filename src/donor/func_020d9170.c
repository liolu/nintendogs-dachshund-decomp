/* compiler: 1.2/sp2p3  */
/* func_020fd160 from projets/nintendogs-dachshund/src/auto/func_020fd160.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02111378(void *, M2C_UNK, M2C_UNK, s32, s32);
void func_020d9170(void *arg0, M2C_UNK arg1) {
    s32 var_r2;

    var_r2 = (*(s32 *) ((s8 *) (arg0) + (0xB4)));
    if (var_r2 <= 0) {
        var_r2 = 0 - var_r2;
    }
    if (var_r2 < 0xA4) {
        func_02111378(arg0, arg1, 0xC00, 0xFAE, 0);
        return;
    }
    func_02111378(arg0, arg1, 0xC00, 0xE66, 0);
}
