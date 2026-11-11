/* compiler: 1.2/sp2p3  */
/* func_02080f80 from projets/nintendogs-dachshund/src/auto/func_02080f80.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0206e1b8(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_020846f8(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;

    func_0206e1b8(arg0 + 8, (s32) &sp0, 4);
    if (sp0 != arg1) {
        return 0;
    }
    if (arg2 != 0) {
        func_0206e1b8(arg0 + 0xC, arg2, 0x1C);
    }
    return 1;
}
