/* compiler: 1.2/sp2p3  */
/* func_020fad08 from projets/nintendogs-dachshund/src/auto/func_020fad08.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02084a88(M2C_UNK, M2C_UNK);
extern s32 *data_02154c9c;
void func_020d6d10(s32 arg0) {
    if (data_02154c9c == ((void *) 0)) {
        return;
    }
    func_02084a88(*data_02154c9c, arg0);
}
