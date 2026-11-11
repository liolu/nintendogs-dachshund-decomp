/* compiler: 1.2/sp2p3  */
/* func_020dd954 from projets/nintendogs-dachshund/src/auto/func_020dd954.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020eebdc(M2C_UNK);
extern void func_020efb78(M2C_UNK);
void func_020ab148(s32 arg0) {
    func_020eebdc(0x31);
    if (arg0 < 3) {
        func_020efb78(0x10);
        return;
    }
    if (arg0 < 7) {
        func_020efb78(0xE);
        return;
    }
    func_020efb78(0xF);
}
